import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    OpaqueFunction,
    SetEnvironmentVariable,
    TimerAction,
)
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue


def _launch_setup(context, *args, **kwargs):
    pkg_share = get_package_share_directory('my_robot_description')
    pkg_ros_gz_sim = get_package_share_directory('ros_gz_sim')

    world_path = os.path.join(pkg_share, 'worlds', 'my_world.sdf')
    urdf_path = os.path.join(pkg_share, 'urdf', 'my_robot.urdf.xacro')
    rviz_config = os.path.join(pkg_share, 'config', 'display.rviz')

    use_sim_time = LaunchConfiguration('use_sim_time')
    headless = LaunchConfiguration('headless').perform(context) == 'true'

    # -r: run immediately, -s: server only (no GUI)
    gz_args = f'-r -s -v 1 {world_path}' if headless else f'-r -v 1 {world_path}'

    robot_description = ParameterValue(
        Command(['xacro ', urdf_path]),
        value_type=str,
    )

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(pkg_ros_gz_sim, 'launch', 'gz_sim.launch.py')
        ),
        launch_arguments={'gz_args': gz_args}.items(),
    )

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        namespace='my_robot',
        output='screen',
        parameters=[{
            'robot_description': robot_description,
            'frame_prefix': 'my_robot/',
            'use_sim_time': use_sim_time,
        }],
    )

    spawn_robot = TimerAction(
        period=3.0,
        actions=[
            Node(
                package='ros_gz_sim',
                executable='create',
                output='screen',
                arguments=[
                    '-world', 'my_world',
                    '-name', 'my_robot',
                    '-topic', '/my_robot/robot_description',
                    '-x', '-8.0',
                    '-y', '0.0',
                    '-z', '0.01',
                ],
            )
        ],
    )

    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        output='screen',
        arguments=[
            '/cmd_vel@geometry_msgs/msg/Twist]gz.msgs.Twist',
            '/odom@nav_msgs/msg/Odometry[gz.msgs.Odometry',
            '/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock',
            '/tf@tf2_msgs/msg/TFMessage[gz.msgs.Pose_V',
            '/world/my_world/model/my_robot/joint_state@sensor_msgs/msg/JointState[gz.msgs.Model',
        ],
        remappings=[
            ('/world/my_world/model/my_robot/joint_state', '/my_robot/joint_states'),
        ],
        parameters=[{'use_sim_time': use_sim_time}],
    )

    rviz = Node(
        package='rviz2',
        executable='rviz2',
        arguments=['-d', rviz_config],
        parameters=[{'use_sim_time': use_sim_time}],
        condition=IfCondition(LaunchConfiguration('rviz')),
        output='screen',
    )

    return [gazebo, robot_state_publisher, spawn_robot, bridge, rviz]


def generate_launch_description():
    return LaunchDescription([
        # gz-transport ignores ROS_DOMAIN_ID. Without a private partition the
        # /world/my_world/create call is answered by another Gazebo on this
        # network, the robot is never spawned here, and DiffDrive does not load.
        SetEnvironmentVariable('GZ_PARTITION', 'my_robot'),
        DeclareLaunchArgument(
            'rviz',
            default_value='true',
            description='Launch RViz2',
        ),
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='true',
            description='Use Gazebo simulation clock',
        ),
        DeclareLaunchArgument(
            'headless',
            default_value='false',
            description='Run Gazebo server only (no GUI)',
        ),
        OpaqueFunction(function=_launch_setup),
    ])
