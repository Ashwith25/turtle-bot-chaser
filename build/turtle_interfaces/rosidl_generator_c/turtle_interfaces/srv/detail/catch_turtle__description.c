// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from turtle_interfaces:srv/CatchTurtle.idl
// generated code does not contain a copyright notice

#include "turtle_interfaces/srv/detail/catch_turtle__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
const rosidl_type_hash_t *
turtle_interfaces__srv__CatchTurtle__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x80, 0xe7, 0x0f, 0x50, 0x1d, 0x6c, 0x70, 0xd3,
      0x0c, 0xb1, 0x6c, 0x77, 0x9c, 0x02, 0xb1, 0x43,
      0x51, 0x41, 0x1e, 0x2e, 0xff, 0x8e, 0x6c, 0x10,
      0x28, 0x2b, 0x7c, 0xa9, 0x24, 0xfb, 0x24, 0xf1,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
const rosidl_type_hash_t *
turtle_interfaces__srv__CatchTurtle_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0x72, 0x4b, 0xf5, 0xb8, 0xec, 0xaf, 0x15,
      0xb6, 0x17, 0xcd, 0x45, 0x99, 0xb6, 0x9f, 0xc0,
      0x63, 0x39, 0x4a, 0xf7, 0xda, 0x68, 0x8c, 0x19,
      0x49, 0x36, 0x4a, 0x66, 0x7c, 0x58, 0x4f, 0x01,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
const rosidl_type_hash_t *
turtle_interfaces__srv__CatchTurtle_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8e, 0xd2, 0x02, 0x9e, 0xfa, 0x5e, 0x8c, 0x95,
      0x0b, 0xb5, 0xc6, 0xf1, 0x39, 0x63, 0xda, 0xd8,
      0x91, 0xff, 0x66, 0xc5, 0x6e, 0xe2, 0x15, 0x40,
      0x47, 0x30, 0x9d, 0xf6, 0x55, 0x7e, 0xa1, 0x20,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
const rosidl_type_hash_t *
turtle_interfaces__srv__CatchTurtle_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x55, 0xc7, 0xa5, 0xb4, 0x0e, 0xb3, 0x13, 0x18,
      0xdb, 0xb6, 0xe6, 0x3f, 0xdf, 0x81, 0xa7, 0x3a,
      0x9c, 0x9f, 0x5b, 0x21, 0x1b, 0x34, 0x91, 0x28,
      0x75, 0xc7, 0x44, 0x01, 0xd9, 0x47, 0x4d, 0xa3,
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

static char turtle_interfaces__srv__CatchTurtle__TYPE_NAME[] = "turtle_interfaces/srv/CatchTurtle";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char turtle_interfaces__srv__CatchTurtle_Event__TYPE_NAME[] = "turtle_interfaces/srv/CatchTurtle_Event";
static char turtle_interfaces__srv__CatchTurtle_Request__TYPE_NAME[] = "turtle_interfaces/srv/CatchTurtle_Request";
static char turtle_interfaces__srv__CatchTurtle_Response__TYPE_NAME[] = "turtle_interfaces/srv/CatchTurtle_Response";

// Define type names, field names, and default values
static char turtle_interfaces__srv__CatchTurtle__FIELD_NAME__request_message[] = "request_message";
static char turtle_interfaces__srv__CatchTurtle__FIELD_NAME__response_message[] = "response_message";
static char turtle_interfaces__srv__CatchTurtle__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field turtle_interfaces__srv__CatchTurtle__FIELDS[] = {
  {
    {turtle_interfaces__srv__CatchTurtle__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtle_interfaces__srv__CatchTurtle_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CatchTurtle__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtle_interfaces__srv__CatchTurtle_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CatchTurtle__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtle_interfaces__srv__CatchTurtle_Event__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtle_interfaces__srv__CatchTurtle__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CatchTurtle_Event__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CatchTurtle_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CatchTurtle_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_interfaces__srv__CatchTurtle__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_interfaces__srv__CatchTurtle__TYPE_NAME, 33, 33},
      {turtle_interfaces__srv__CatchTurtle__FIELDS, 3, 3},
    },
    {turtle_interfaces__srv__CatchTurtle__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = turtle_interfaces__srv__CatchTurtle_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtle_interfaces__srv__CatchTurtle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = turtle_interfaces__srv__CatchTurtle_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtle_interfaces__srv__CatchTurtle_Request__FIELD_NAME__name[] = "name";

static rosidl_runtime_c__type_description__Field turtle_interfaces__srv__CatchTurtle_Request__FIELDS[] = {
  {
    {turtle_interfaces__srv__CatchTurtle_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_interfaces__srv__CatchTurtle_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_interfaces__srv__CatchTurtle_Request__TYPE_NAME, 41, 41},
      {turtle_interfaces__srv__CatchTurtle_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtle_interfaces__srv__CatchTurtle_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field turtle_interfaces__srv__CatchTurtle_Response__FIELDS[] = {
  {
    {turtle_interfaces__srv__CatchTurtle_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_interfaces__srv__CatchTurtle_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_interfaces__srv__CatchTurtle_Response__TYPE_NAME, 42, 42},
      {turtle_interfaces__srv__CatchTurtle_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtle_interfaces__srv__CatchTurtle_Event__FIELD_NAME__info[] = "info";
static char turtle_interfaces__srv__CatchTurtle_Event__FIELD_NAME__request[] = "request";
static char turtle_interfaces__srv__CatchTurtle_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field turtle_interfaces__srv__CatchTurtle_Event__FIELDS[] = {
  {
    {turtle_interfaces__srv__CatchTurtle_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CatchTurtle_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtle_interfaces__srv__CatchTurtle_Request__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CatchTurtle_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtle_interfaces__srv__CatchTurtle_Response__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtle_interfaces__srv__CatchTurtle_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CatchTurtle_Request__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {turtle_interfaces__srv__CatchTurtle_Response__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_interfaces__srv__CatchTurtle_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_interfaces__srv__CatchTurtle_Event__TYPE_NAME, 39, 39},
      {turtle_interfaces__srv__CatchTurtle_Event__FIELDS, 3, 3},
    },
    {turtle_interfaces__srv__CatchTurtle_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = turtle_interfaces__srv__CatchTurtle_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtle_interfaces__srv__CatchTurtle_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
turtle_interfaces__srv__CatchTurtle__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_interfaces__srv__CatchTurtle__TYPE_NAME, 33, 33},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 28, 28},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtle_interfaces__srv__CatchTurtle_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_interfaces__srv__CatchTurtle_Request__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtle_interfaces__srv__CatchTurtle_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_interfaces__srv__CatchTurtle_Response__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtle_interfaces__srv__CatchTurtle_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_interfaces__srv__CatchTurtle_Event__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_interfaces__srv__CatchTurtle__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_interfaces__srv__CatchTurtle__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *turtle_interfaces__srv__CatchTurtle_Event__get_individual_type_description_source(NULL);
    sources[4] = *turtle_interfaces__srv__CatchTurtle_Request__get_individual_type_description_source(NULL);
    sources[5] = *turtle_interfaces__srv__CatchTurtle_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_interfaces__srv__CatchTurtle_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_interfaces__srv__CatchTurtle_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_interfaces__srv__CatchTurtle_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_interfaces__srv__CatchTurtle_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_interfaces__srv__CatchTurtle_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_interfaces__srv__CatchTurtle_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *turtle_interfaces__srv__CatchTurtle_Request__get_individual_type_description_source(NULL);
    sources[4] = *turtle_interfaces__srv__CatchTurtle_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
