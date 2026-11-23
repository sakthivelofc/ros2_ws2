// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from first_interfaces:srv/AddTwoNumbers.idl
// generated code does not contain a copyright notice

#include "first_interfaces/srv/detail/add_two_numbers__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
const rosidl_type_hash_t *
first_interfaces__srv__AddTwoNumbers__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb6, 0x96, 0x73, 0x51, 0x24, 0x19, 0xf7, 0xfa,
      0x30, 0xab, 0x44, 0x06, 0xf0, 0x2a, 0x09, 0xb5,
      0x51, 0x69, 0x0d, 0x07, 0x90, 0xf8, 0x7c, 0xe5,
      0xe0, 0x78, 0x66, 0x07, 0x59, 0xc5, 0xe5, 0x23,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
const rosidl_type_hash_t *
first_interfaces__srv__AddTwoNumbers_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x82, 0xe0, 0x43, 0x8a, 0x18, 0x04, 0x08, 0x91,
      0x82, 0x80, 0x96, 0x63, 0xce, 0x9d, 0x48, 0x13,
      0xd7, 0xa8, 0x75, 0x09, 0x40, 0x6a, 0x6e, 0xc9,
      0x51, 0x27, 0x04, 0x78, 0x8b, 0x18, 0xab, 0xe3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
const rosidl_type_hash_t *
first_interfaces__srv__AddTwoNumbers_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x15, 0xfd, 0xb5, 0x2b, 0xdc, 0x75, 0xf4, 0x74,
      0x20, 0x69, 0xa6, 0xb3, 0xfb, 0x94, 0x6e, 0xfd,
      0x28, 0x54, 0x59, 0x7f, 0xd5, 0xc6, 0x02, 0xb1,
      0x6c, 0xc2, 0xf3, 0x0e, 0x17, 0x99, 0xd9, 0x8e,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_first_interfaces
const rosidl_type_hash_t *
first_interfaces__srv__AddTwoNumbers_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xcb, 0xda, 0xd3, 0xcc, 0xb1, 0x59, 0x61, 0x6c,
      0x23, 0x72, 0x43, 0xc1, 0x8b, 0xe9, 0x25, 0x9c,
      0x39, 0xc2, 0x7c, 0x76, 0x86, 0xe9, 0x4d, 0x0d,
      0xe9, 0xdf, 0x54, 0xc8, 0xb0, 0xe8, 0x8d, 0xe1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char first_interfaces__srv__AddTwoNumbers__TYPE_NAME[] = "first_interfaces/srv/AddTwoNumbers";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char first_interfaces__srv__AddTwoNumbers_Event__TYPE_NAME[] = "first_interfaces/srv/AddTwoNumbers_Event";
static char first_interfaces__srv__AddTwoNumbers_Request__TYPE_NAME[] = "first_interfaces/srv/AddTwoNumbers_Request";
static char first_interfaces__srv__AddTwoNumbers_Response__TYPE_NAME[] = "first_interfaces/srv/AddTwoNumbers_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char first_interfaces__srv__AddTwoNumbers__FIELD_NAME__request_message[] = "request_message";
static char first_interfaces__srv__AddTwoNumbers__FIELD_NAME__response_message[] = "response_message";
static char first_interfaces__srv__AddTwoNumbers__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field first_interfaces__srv__AddTwoNumbers__FIELDS[] = {
  {
    {first_interfaces__srv__AddTwoNumbers__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {first_interfaces__srv__AddTwoNumbers_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {first_interfaces__srv__AddTwoNumbers__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {first_interfaces__srv__AddTwoNumbers_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {first_interfaces__srv__AddTwoNumbers__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {first_interfaces__srv__AddTwoNumbers_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription first_interfaces__srv__AddTwoNumbers__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {first_interfaces__srv__AddTwoNumbers_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {first_interfaces__srv__AddTwoNumbers_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {first_interfaces__srv__AddTwoNumbers_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
first_interfaces__srv__AddTwoNumbers__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {first_interfaces__srv__AddTwoNumbers__TYPE_NAME, 34, 34},
      {first_interfaces__srv__AddTwoNumbers__FIELDS, 3, 3},
    },
    {first_interfaces__srv__AddTwoNumbers__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = first_interfaces__srv__AddTwoNumbers_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = first_interfaces__srv__AddTwoNumbers_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = first_interfaces__srv__AddTwoNumbers_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char first_interfaces__srv__AddTwoNumbers_Request__FIELD_NAME__a[] = "a";
static char first_interfaces__srv__AddTwoNumbers_Request__FIELD_NAME__b[] = "b";

static rosidl_runtime_c__type_description__Field first_interfaces__srv__AddTwoNumbers_Request__FIELDS[] = {
  {
    {first_interfaces__srv__AddTwoNumbers_Request__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {first_interfaces__srv__AddTwoNumbers_Request__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
first_interfaces__srv__AddTwoNumbers_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {first_interfaces__srv__AddTwoNumbers_Request__TYPE_NAME, 42, 42},
      {first_interfaces__srv__AddTwoNumbers_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char first_interfaces__srv__AddTwoNumbers_Response__FIELD_NAME__sum[] = "sum";

static rosidl_runtime_c__type_description__Field first_interfaces__srv__AddTwoNumbers_Response__FIELDS[] = {
  {
    {first_interfaces__srv__AddTwoNumbers_Response__FIELD_NAME__sum, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
first_interfaces__srv__AddTwoNumbers_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {first_interfaces__srv__AddTwoNumbers_Response__TYPE_NAME, 43, 43},
      {first_interfaces__srv__AddTwoNumbers_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char first_interfaces__srv__AddTwoNumbers_Event__FIELD_NAME__info[] = "info";
static char first_interfaces__srv__AddTwoNumbers_Event__FIELD_NAME__request[] = "request";
static char first_interfaces__srv__AddTwoNumbers_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field first_interfaces__srv__AddTwoNumbers_Event__FIELDS[] = {
  {
    {first_interfaces__srv__AddTwoNumbers_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {first_interfaces__srv__AddTwoNumbers_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {first_interfaces__srv__AddTwoNumbers_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {first_interfaces__srv__AddTwoNumbers_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {first_interfaces__srv__AddTwoNumbers_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription first_interfaces__srv__AddTwoNumbers_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {first_interfaces__srv__AddTwoNumbers_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {first_interfaces__srv__AddTwoNumbers_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
first_interfaces__srv__AddTwoNumbers_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {first_interfaces__srv__AddTwoNumbers_Event__TYPE_NAME, 40, 40},
      {first_interfaces__srv__AddTwoNumbers_Event__FIELDS, 3, 3},
    },
    {first_interfaces__srv__AddTwoNumbers_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = first_interfaces__srv__AddTwoNumbers_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = first_interfaces__srv__AddTwoNumbers_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 a\n"
  "int64 b\n"
  "---\n"
  "int64 sum";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
first_interfaces__srv__AddTwoNumbers__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {first_interfaces__srv__AddTwoNumbers__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 29, 29},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
first_interfaces__srv__AddTwoNumbers_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {first_interfaces__srv__AddTwoNumbers_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
first_interfaces__srv__AddTwoNumbers_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {first_interfaces__srv__AddTwoNumbers_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
first_interfaces__srv__AddTwoNumbers_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {first_interfaces__srv__AddTwoNumbers_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
first_interfaces__srv__AddTwoNumbers__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *first_interfaces__srv__AddTwoNumbers__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *first_interfaces__srv__AddTwoNumbers_Event__get_individual_type_description_source(NULL);
    sources[3] = *first_interfaces__srv__AddTwoNumbers_Request__get_individual_type_description_source(NULL);
    sources[4] = *first_interfaces__srv__AddTwoNumbers_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
first_interfaces__srv__AddTwoNumbers_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *first_interfaces__srv__AddTwoNumbers_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
first_interfaces__srv__AddTwoNumbers_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *first_interfaces__srv__AddTwoNumbers_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
first_interfaces__srv__AddTwoNumbers_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *first_interfaces__srv__AddTwoNumbers_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *first_interfaces__srv__AddTwoNumbers_Request__get_individual_type_description_source(NULL);
    sources[3] = *first_interfaces__srv__AddTwoNumbers_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
