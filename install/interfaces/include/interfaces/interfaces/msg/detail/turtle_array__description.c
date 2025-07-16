// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from interfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#include "interfaces/msg/detail/turtle_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_interfaces
const rosidl_type_hash_t *
interfaces__msg__TurtleArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa6, 0x8d, 0xd2, 0x8b, 0x4d, 0x39, 0x45, 0xfc,
      0x16, 0x62, 0x8b, 0xfe, 0xfc, 0xed, 0x87, 0x72,
      0xea, 0x1e, 0xb1, 0x04, 0x82, 0x6e, 0xad, 0xda,
      0x24, 0xa8, 0x9c, 0x22, 0x34, 0xc4, 0x05, 0xdb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "interfaces/msg/detail/turtle__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t interfaces__msg__Turtle__EXPECTED_HASH = {1, {
    0x14, 0x34, 0x33, 0x48, 0x8d, 0x2c, 0xa3, 0xf3,
    0xba, 0xeb, 0xec, 0xa3, 0x1b, 0x99, 0x0c, 0xea,
    0xfb, 0xa2, 0xc0, 0x7c, 0x82, 0xe0, 0xcd, 0x7f,
    0xce, 0x73, 0xe1, 0x47, 0x53, 0xa5, 0x0e, 0x2a,
  }};
#endif

static char interfaces__msg__TurtleArray__TYPE_NAME[] = "interfaces/msg/TurtleArray";
static char interfaces__msg__Turtle__TYPE_NAME[] = "interfaces/msg/Turtle";

// Define type names, field names, and default values
static char interfaces__msg__TurtleArray__FIELD_NAME__turtles[] = "turtles";

static rosidl_runtime_c__type_description__Field interfaces__msg__TurtleArray__FIELDS[] = {
  {
    {interfaces__msg__TurtleArray__FIELD_NAME__turtles, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {interfaces__msg__Turtle__TYPE_NAME, 21, 21},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription interfaces__msg__TurtleArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {interfaces__msg__Turtle__TYPE_NAME, 21, 21},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
interfaces__msg__TurtleArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {interfaces__msg__TurtleArray__TYPE_NAME, 26, 26},
      {interfaces__msg__TurtleArray__FIELDS, 1, 1},
    },
    {interfaces__msg__TurtleArray__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&interfaces__msg__Turtle__EXPECTED_HASH, interfaces__msg__Turtle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = interfaces__msg__Turtle__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "Turtle[] turtles";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
interfaces__msg__TurtleArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {interfaces__msg__TurtleArray__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 16, 16},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
interfaces__msg__TurtleArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *interfaces__msg__TurtleArray__get_individual_type_description_source(NULL),
    sources[1] = *interfaces__msg__Turtle__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
