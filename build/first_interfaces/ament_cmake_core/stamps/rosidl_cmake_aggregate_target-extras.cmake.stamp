# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target first_interfaces::first_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${first_interfaces_TARGETS}.
if(first_interfaces_TARGETS AND NOT TARGET first_interfaces::first_interfaces)
  add_library(first_interfaces::first_interfaces INTERFACE IMPORTED)
  set_target_properties(first_interfaces::first_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${first_interfaces_TARGETS}")
endif()
