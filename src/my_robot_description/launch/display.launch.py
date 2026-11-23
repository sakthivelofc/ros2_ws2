from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch_ros.parameter_descriptions import ParameterValue


def generate_launch_description():

    pkg_share = FindPackageShare('my_robot_description')

    robot_description = ParameterValue(
        Command([
            'xacro ',
            PathJoinSubstitution([
                pkg_share,
                'urdf',
                'my_robot.urdf.xacro'
            ])
        ]),
        value_type=str
    )

    rviz_config = PathJoinSubstitution([
        pkg_share,
        'config',
        'display.rviz'
    ])

    return LaunchDescription([

        # Robot State Publisher
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            parameters=[{
                'robot_description': robot_description
            }]
        ),

        # Provide odom -> base_link so RViz Fixed Frame "odom" works without Gazebo
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            arguments=[
                '--frame-id', 'odom',
                '--child-frame-id', 'base_footprint',
            ],
        ),

        # Joint State Publisher GUI
        Node(
            package='joint_state_publisher_gui',
            executable='joint_state_publisher_gui'
        ),

        # RViz with RobotModel
        Node(
            package='rviz2',
            executable='rviz2',
            arguments=['-d', rviz_config],
            output='screen'
        )

    ])