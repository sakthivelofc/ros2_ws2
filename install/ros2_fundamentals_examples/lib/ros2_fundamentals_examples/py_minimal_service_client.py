#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts


class MinimalServiceClient(Node):

    def __init__(self):
        super().__init__('minimal_service_client')

        self.client = self.create_client(
            AddTwoInts,
            'add_two_ints'
        )

        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Waiting for Service Server...')

        self.request = AddTwoInts.Request()

        self.request.a = 10
        self.request.b = 20

        self.future = self.client.call_async(self.request)

        self.future.add_done_callback(self.response_callback)

    def response_callback(self, future):

        response = future.result()

        self.get_logger().info(f'Result: {response.sum}')


def main(args=None):

    rclpy.init(args=args)

    node = MinimalServiceClient()

    rclpy.spin_until_future_complete(node, node.future)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()