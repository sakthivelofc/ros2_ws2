from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():

    return LaunchDescription([

        # Publisher Node
        Node(
            package='ros2_fundamentals_examples',
            executable='py_minimal_publisher.py',
            output='screen'
        ),

        # Subscriber Node
        Node(
            package='ros2_fundamentals_examples',
            executable='py_minimal_subscriber.py',
            output='screen'
        ),

        # Service Server Node
        Node(
            package='ros2_fundamentals_examples',
            executable='py_minimal_service_server.py',
            output='screen'
        ),

        # Service Client Node
        Node(
            package='ros2_fundamentals_examples',
            executable='py_minimal_service_client.py',
            output='screen'
        )

    ])