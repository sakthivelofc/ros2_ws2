// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from first_interfaces:srv/AddTwoNumbers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "first_interfaces/srv/add_two_numbers.h"


#ifndef FIRST_INTERFACES__SRV__DETAIL__ADD_TWO_NUMBERS__STRUCT_H_
#define FIRST_INTERFACES__SRV__DETAIL__ADD_TWO_NUMBERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwoNumbers in the package first_interfaces.
typedef struct first_interfaces__srv__AddTwoNumbers_Request
{
  int64_t a;
  int64_t b;
} first_interfaces__srv__AddTwoNumbers_Request;

// Struct for a sequence of first_interfaces__srv__AddTwoNumbers_Request.
typedef struct first_interfaces__srv__AddTwoNumbers_Request__Sequence
{
  first_interfaces__srv__AddTwoNumbers_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_interfaces__srv__AddTwoNumbers_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/AddTwoNumbers in the package first_interfaces.
typedef struct first_interfaces__srv__AddTwoNumbers_Response
{
  int64_t sum;
} first_interfaces__srv__AddTwoNumbers_Response;

// Struct for a sequence of first_interfaces__srv__AddTwoNumbers_Response.
typedef struct first_interfaces__srv__AddTwoNumbers_Response__Sequence
{
  first_interfaces__srv__AddTwoNumbers_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_interfaces__srv__AddTwoNumbers_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  first_interfaces__srv__AddTwoNumbers_Event__request__MAX_SIZE = 1
};
// response
enum
{
  first_interfaces__srv__AddTwoNumbers_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AddTwoNumbers in the package first_interfaces.
typedef struct first_interfaces__srv__AddTwoNumbers_Event
{
  service_msgs__msg__ServiceEventInfo info;
  first_interfaces__srv__AddTwoNumbers_Request__Sequence request;
  first_interfaces__srv__AddTwoNumbers_Response__Sequence response;
} first_interfaces__srv__AddTwoNumbers_Event;

// Struct for a sequence of first_interfaces__srv__AddTwoNumbers_Event.
typedef struct first_interfaces__srv__AddTwoNumbers_Event__Sequence
{
  first_interfaces__srv__AddTwoNumbers_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} first_interfaces__srv__AddTwoNumbers_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FIRST_INTERFACES__SRV__DETAIL__ADD_TWO_NUMBERS__STRUCT_H_
