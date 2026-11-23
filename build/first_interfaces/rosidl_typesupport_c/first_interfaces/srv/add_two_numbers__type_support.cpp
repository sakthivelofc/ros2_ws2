// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from first_interfaces:srv/AddTwoNumbers.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "first_interfaces/srv/detail/add_two_numbers__struct.h"
#include "first_interfaces/srv/detail/add_two_numbers__type_support.h"
#include "first_interfaces/srv/detail/add_two_numbers__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace first_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AddTwoNumbers_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddTwoNumbers_Request_type_support_ids_t;

static const _AddTwoNumbers_Request_type_support_ids_t _AddTwoNumbers_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddTwoNumbers_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddTwoNumbers_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddTwoNumbers_Request_type_support_symbol_names_t _AddTwoNumbers_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, first_interfaces, srv, AddTwoNumbers_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_interfaces, srv, AddTwoNumbers_Request)),
  }
};

typedef struct _AddTwoNumbers_Request_type_support_data_t
{
  void * data[2];
} _AddTwoNumbers_Request_type_support_data_t;

static _AddTwoNumbers_Request_type_support_data_t _AddTwoNumbers_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddTwoNumbers_Request_message_typesupport_map = {
  2,
  "first_interfaces",
  &_AddTwoNumbers_Request_message_typesupport_ids.typesupport_identifier[0],
  &_AddTwoNumbers_Request_message_typesupport_symbol_names.symbol_name[0],
  &_AddTwoNumbers_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddTwoNumbers_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddTwoNumbers_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &first_interfaces__srv__AddTwoNumbers_Request__get_type_hash,
  &first_interfaces__srv__AddTwoNumbers_Request__get_type_description,
  &first_interfaces__srv__AddTwoNumbers_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace first_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, first_interfaces, srv, AddTwoNumbers_Request)() {
  return &::first_interfaces::srv::rosidl_typesupport_c::AddTwoNumbers_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "first_interfaces/srv/detail/add_two_numbers__struct.h"
// already included above
// #include "first_interfaces/srv/detail/add_two_numbers__type_support.h"
// already included above
// #include "first_interfaces/srv/detail/add_two_numbers__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace first_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AddTwoNumbers_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddTwoNumbers_Response_type_support_ids_t;

static const _AddTwoNumbers_Response_type_support_ids_t _AddTwoNumbers_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddTwoNumbers_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddTwoNumbers_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddTwoNumbers_Response_type_support_symbol_names_t _AddTwoNumbers_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, first_interfaces, srv, AddTwoNumbers_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_interfaces, srv, AddTwoNumbers_Response)),
  }
};

typedef struct _AddTwoNumbers_Response_type_support_data_t
{
  void * data[2];
} _AddTwoNumbers_Response_type_support_data_t;

static _AddTwoNumbers_Response_type_support_data_t _AddTwoNumbers_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddTwoNumbers_Response_message_typesupport_map = {
  2,
  "first_interfaces",
  &_AddTwoNumbers_Response_message_typesupport_ids.typesupport_identifier[0],
  &_AddTwoNumbers_Response_message_typesupport_symbol_names.symbol_name[0],
  &_AddTwoNumbers_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddTwoNumbers_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddTwoNumbers_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &first_interfaces__srv__AddTwoNumbers_Response__get_type_hash,
  &first_interfaces__srv__AddTwoNumbers_Response__get_type_description,
  &first_interfaces__srv__AddTwoNumbers_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace first_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, first_interfaces, srv, AddTwoNumbers_Response)() {
  return &::first_interfaces::srv::rosidl_typesupport_c::AddTwoNumbers_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "first_interfaces/srv/detail/add_two_numbers__struct.h"
// already included above
// #include "first_interfaces/srv/detail/add_two_numbers__type_support.h"
// already included above
// #include "first_interfaces/srv/detail/add_two_numbers__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace first_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _AddTwoNumbers_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddTwoNumbers_Event_type_support_ids_t;

static const _AddTwoNumbers_Event_type_support_ids_t _AddTwoNumbers_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddTwoNumbers_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddTwoNumbers_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddTwoNumbers_Event_type_support_symbol_names_t _AddTwoNumbers_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, first_interfaces, srv, AddTwoNumbers_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_interfaces, srv, AddTwoNumbers_Event)),
  }
};

typedef struct _AddTwoNumbers_Event_type_support_data_t
{
  void * data[2];
} _AddTwoNumbers_Event_type_support_data_t;

static _AddTwoNumbers_Event_type_support_data_t _AddTwoNumbers_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddTwoNumbers_Event_message_typesupport_map = {
  2,
  "first_interfaces",
  &_AddTwoNumbers_Event_message_typesupport_ids.typesupport_identifier[0],
  &_AddTwoNumbers_Event_message_typesupport_symbol_names.symbol_name[0],
  &_AddTwoNumbers_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t AddTwoNumbers_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddTwoNumbers_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &first_interfaces__srv__AddTwoNumbers_Event__get_type_hash,
  &first_interfaces__srv__AddTwoNumbers_Event__get_type_description,
  &first_interfaces__srv__AddTwoNumbers_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace first_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, first_interfaces, srv, AddTwoNumbers_Event)() {
  return &::first_interfaces::srv::rosidl_typesupport_c::AddTwoNumbers_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "first_interfaces/srv/detail/add_two_numbers__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace first_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _AddTwoNumbers_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _AddTwoNumbers_type_support_ids_t;

static const _AddTwoNumbers_type_support_ids_t _AddTwoNumbers_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _AddTwoNumbers_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _AddTwoNumbers_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _AddTwoNumbers_type_support_symbol_names_t _AddTwoNumbers_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, first_interfaces, srv, AddTwoNumbers)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, first_interfaces, srv, AddTwoNumbers)),
  }
};

typedef struct _AddTwoNumbers_type_support_data_t
{
  void * data[2];
} _AddTwoNumbers_type_support_data_t;

static _AddTwoNumbers_type_support_data_t _AddTwoNumbers_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _AddTwoNumbers_service_typesupport_map = {
  2,
  "first_interfaces",
  &_AddTwoNumbers_service_typesupport_ids.typesupport_identifier[0],
  &_AddTwoNumbers_service_typesupport_symbol_names.symbol_name[0],
  &_AddTwoNumbers_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t AddTwoNumbers_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_AddTwoNumbers_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &AddTwoNumbers_Request_message_type_support_handle,
  &AddTwoNumbers_Response_message_type_support_handle,
  &AddTwoNumbers_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    first_interfaces,
    srv,
    AddTwoNumbers
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    first_interfaces,
    srv,
    AddTwoNumbers
  ),
  &first_interfaces__srv__AddTwoNumbers__get_type_hash,
  &first_interfaces__srv__AddTwoNumbers__get_type_description,
  &first_interfaces__srv__AddTwoNumbers__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace first_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, first_interfaces, srv, AddTwoNumbers)() {
  return &::first_interfaces::srv::rosidl_typesupport_c::AddTwoNumbers_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
