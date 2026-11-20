#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts


class MinimalServiceServer(Node):

    def __init__(self):
        super().__init__('minimal_service_server')

        self.srv = self.create_service(
            AddTwoInts,
            'add_two_ints',
            self.add_two_ints_callback
        )

        self.get_logger().info('Service Server is ready!')

    def add_two_ints_callback(self, request, response):

        response.sum = request.a + request.b

        self.get_logger().info(
            f'Received: {request.a} + {request.b}'
        )

        self.get_logger().info(
            f'Result: {response.sum}'
        )


        return response


def main(args=None):

    rclpy.init(args=args)

    minimal_service_server = MinimalServiceServer()

    rclpy.spin(minimal_service_server)

    minimal_service_server.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()