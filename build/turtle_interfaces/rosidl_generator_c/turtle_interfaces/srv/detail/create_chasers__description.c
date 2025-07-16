// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from turtle_interfaces:srv/CreateChasers.idl
// generated code does not contain a copyright notice

#include "turtle_interfaces/srv/detail/create_chasers__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
const rosidl_type_hash_t *
turtle_interfaces__srv__CreateChasers__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x70, 0xbf, 0x48, 0xed, 0x60, 0xbb, 0x79, 0xb9,
      0x93, 0x72, 0x9c, 0x18, 0xd2, 0x37, 0x0c, 0x43,
      0x20, 0xf5, 0xb6, 0x6b, 0x00, 0x69, 0xc0, 0x0e,
      0x21, 0x90, 0x6b, 0xf7, 0xd8, 0x70, 0x50, 0x50,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
const rosidl_type_hash_t *
turtle_interfaces__srv__CreateChasers_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb9, 0x70, 0x45, 0x2f, 0x60, 0x0e, 0xa7, 0x51,
      0x0f, 0x0f, 0x44, 0x81, 0xc7, 0xcd, 0xe9, 0xb6,
      0x14, 0x09, 0x44, 0x61, 0xd9, 0x81, 0xfc, 0x14,
      0xd0, 0x84, 0x93, 0xa7, 0x54, 0xd4, 0x0e, 0x90,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
const rosidl_type_hash_t *
turtle_interfaces__srv__CreateChasers_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdd, 0x41, 0x25, 0xd0, 0xdd, 0x2e, 0xe0, 0x96,
      0xe3, 0xd3, 0x3d, 0x8a, 0x27, 0xb5, 0x4b, 0xdc,
      0xc1, 0x90, 0x45, 0x55, 0x95, 0xf7, 0x21, 0xfa,
      0xf6, 0x4f, 0x78, 0x4d, 0x2b, 0xee, 0xde, 0x36,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
const rosidl_type_hash_t *
turtle_interfaces__srv__CreateChasers_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe2, 0x9a, 0xd8, 0xb4, 0x65, 0x32, 0xe1, 0xbe,
      0x93, 0x23, 0xc1, 0x26, 0x42, 0x40, 0xb0, 0x0f,
      0x20, 0xd5, 0x62, 0x3f, 0x86, 0x59, 0xbb, 0x98,
      0x22, 0xe3, 0xbd, 0x57, 0xa0, 0x58, 0xb5, 0xaf,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

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

static char turtle_interfaces__srv__CreateChasers__TYPE_NAME[] = "turtle_interfaces/srv/CreateChasers";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char turtle_interfaces__srv__CreateChasers_Event__TYPE_NAME[] = "turtle_interfaces/srv/CreateChasers_Event";
static char turtle_interfaces__srv__CreateChasers_Request__TYPE_NAME[] = "turtle_interfaces/srv/CreateChasers_Request";
static char turtle_interfaces__srv__CreateChasers_Response__TYPE_NAME[] = "turtle_interfaces/srv/CreateChasers_Response";

// Define type names, field names, and default values
static char turtle_interfaces__srv__CreateChasers__FIELD_NAME__request_message[] = "request_message";
static char turtle_interfaces__srv__CreateChasers__FIELD_NAME__response_message[] = "response_message";
static char turtle_interfaces__srv__CreateChasers__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field turtle_interfaces__srv__CreateChasers__FIELDS[] = {
  {
    {turtle_interfaces__srv__CreateChasers__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtle_interfaces__srv__CreateChasers_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CreateChasers__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtle_interfaces__srv__CreateChasers_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CreateChasers__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtle_interfaces__srv__CreateChasers_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtle_interfaces__srv__CreateChasers__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CreateChasers_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CreateChasers_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CreateChasers_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_interfaces__srv__CreateChasers__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_interfaces__srv__CreateChasers__TYPE_NAME, 35, 35},
      {turtle_interfaces__srv__CreateChasers__FIELDS, 3, 3},
    },
    {turtle_interfaces__srv__CreateChasers__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = turtle_interfaces__srv__CreateChasers_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtle_interfaces__srv__CreateChasers_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = turtle_interfaces__srv__CreateChasers_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtle_interfaces__srv__CreateChasers_Request__FIELD_NAME__count[] = "count";

static rosidl_runtime_c__type_description__Field turtle_interfaces__srv__CreateChasers_Request__FIELDS[] = {
  {
    {turtle_interfaces__srv__CreateChasers_Request__FIELD_NAME__count, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_interfaces__srv__CreateChasers_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_interfaces__srv__CreateChasers_Request__TYPE_NAME, 43, 43},
      {turtle_interfaces__srv__CreateChasers_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtle_interfaces__srv__CreateChasers_Response__FIELD_NAME__turtle_names[] = "turtle_names";

static rosidl_runtime_c__type_description__Field turtle_interfaces__srv__CreateChasers_Response__FIELDS[] = {
  {
    {turtle_interfaces__srv__CreateChasers_Response__FIELD_NAME__turtle_names, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_interfaces__srv__CreateChasers_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_interfaces__srv__CreateChasers_Response__TYPE_NAME, 44, 44},
      {turtle_interfaces__srv__CreateChasers_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtle_interfaces__srv__CreateChasers_Event__FIELD_NAME__info[] = "info";
static char turtle_interfaces__srv__CreateChasers_Event__FIELD_NAME__request[] = "request";
static char turtle_interfaces__srv__CreateChasers_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field turtle_interfaces__srv__CreateChasers_Event__FIELDS[] = {
  {
    {turtle_interfaces__srv__CreateChasers_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CreateChasers_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtle_interfaces__srv__CreateChasers_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CreateChasers_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtle_interfaces__srv__CreateChasers_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtle_interfaces__srv__CreateChasers_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CreateChasers_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CreateChasers_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_interfaces__srv__CreateChasers_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_interfaces__srv__CreateChasers_Event__TYPE_NAME, 41, 41},
      {turtle_interfaces__srv__CreateChasers_Event__FIELDS, 3, 3},
    },
    {turtle_interfaces__srv__CreateChasers_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = turtle_interfaces__srv__CreateChasers_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtle_interfaces__srv__CreateChasers_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 count\n"
  "---\n"
  "string[] turtle_names";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
turtle_interfaces__srv__CreateChasers__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_interfaces__srv__CreateChasers__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 37, 37},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtle_interfaces__srv__CreateChasers_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_interfaces__srv__CreateChasers_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtle_interfaces__srv__CreateChasers_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_interfaces__srv__CreateChasers_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtle_interfaces__srv__CreateChasers_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_interfaces__srv__CreateChasers_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_interfaces__srv__CreateChasers__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_interfaces__srv__CreateChasers__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *turtle_interfaces__srv__CreateChasers_Event__get_individual_type_description_source(NULL);
    sources[4] = *turtle_interfaces__srv__CreateChasers_Request__get_individual_type_description_source(NULL);
    sources[5] = *turtle_interfaces__srv__CreateChasers_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_interfaces__srv__CreateChasers_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_interfaces__srv__CreateChasers_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_interfaces__srv__CreateChasers_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_interfaces__srv__CreateChasers_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_interfaces__srv__CreateChasers_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_interfaces__srv__CreateChasers_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *turtle_interfaces__srv__CreateChasers_Request__get_individual_type_description_source(NULL);
    sources[4] = *turtle_interfaces__srv__CreateChasers_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
