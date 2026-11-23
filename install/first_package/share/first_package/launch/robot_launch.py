from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():

    publisher = Node(
        package='first_package',
        executable='publisher',
        name='robot_publisher',
        output='screen'
    )

    subscriber = Node(
        package='first_package',
        executable='subscriber',
        name='robot_subscriber',
        output='screen'
    )

    server = Node(
        package='first_package',
        executable='service_server',
        name='robot_service_server',
        output='screen'
    )

    client = Node(
        package='first_package',
        executable='service_client',
        name='robot_service_client',
        output='screen'
    )

    return LaunchDescription([
        publisher,
        subscriber,
        server,
        client
    ])