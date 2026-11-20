cmake_minimum_required(VERSION 3.8)

project(ros2_fundamentals_examples)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find required ROS 2 package
find_package(ament_cmake REQUIRED)

# Install Python Publisher and Subscriber nodes
install(
  PROGRAMS
    scripts/py_minimal_publisher.py
    scripts/py_minimal_subscriber.py
    scripts/py_minimal_service_server.py
    scripts/py_minimal_service_client.py

  DESTINATION lib/${PROJECT_NAME}
)



# Install Python module
install(
  DIRECTORY ros2_fundamentals_examples/
  DESTINATION lib/${PROJECT_NAME}/${PROJECT_NAME}
  FILES_MATCHING PATTERN "*.py"
)

ament_package()
