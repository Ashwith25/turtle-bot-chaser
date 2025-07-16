// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from turtle_interfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#include "turtle_interfaces/msg/detail/turtle_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_turtle_interfaces
const rosidl_type_hash_t *
turtle_interfaces__msg__TurtleArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0x09, 0x20, 0xb6, 0xb9, 0x0e, 0x23, 0x1f,
      0xb1, 0x50, 0x05, 0xd4, 0xd1, 0x71, 0x8d, 0xdb,
      0xc3, 0xbe, 0xf1, 0x7d, 0xa0, 0x46, 0xdb, 0xd6,
      0x85, 0x03, 0x9a, 0xd8, 0xcb, 0xb9, 0x98, 0x24,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "turtle_interfaces/msg/detail/turtle__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t turtle_interfaces__msg__Turtle__EXPECTED_HASH = {1, {
    0xee, 0x72, 0xbb, 0xfe, 0x8c, 0xcf, 0xef, 0x7e,
    0x44, 0x93, 0x44, 0xf0, 0x08, 0xb0, 0xe9, 0x93,
    0x6e, 0x2e, 0xf7, 0xb7, 0x28, 0x3e, 0x97, 0x4f,
    0xf3, 0x26, 0xc6, 0xc2, 0x3e, 0x97, 0xdf, 0xf6,
  }};
#endif

static char turtle_interfaces__msg__TurtleArray__TYPE_NAME[] = "turtle_interfaces/msg/TurtleArray";
static char turtle_interfaces__msg__Turtle__TYPE_NAME[] = "turtle_interfaces/msg/Turtle";

// Define type names, field names, and default values
static char turtle_interfaces__msg__TurtleArray__FIELD_NAME__turtles[] = "turtles";

static rosidl_runtime_c__type_description__Field turtle_interfaces__msg__TurtleArray__FIELDS[] = {
  {
    {turtle_interfaces__msg__TurtleArray__FIELD_NAME__turtles, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {turtle_interfaces__msg__Turtle__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtle_interfaces__msg__TurtleArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {turtle_interfaces__msg__Turtle__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtle_interfaces__msg__TurtleArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtle_interfaces__msg__TurtleArray__TYPE_NAME, 33, 33},
      {turtle_interfaces__msg__TurtleArray__FIELDS, 1, 1},
    },
    {turtle_interfaces__msg__TurtleArray__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&turtle_interfaces__msg__Turtle__EXPECTED_HASH, turtle_interfaces__msg__Turtle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = turtle_interfaces__msg__Turtle__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "Turtle[] turtles";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
turtle_interfaces__msg__TurtleArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtle_interfaces__msg__TurtleArray__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 16, 16},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtle_interfaces__msg__TurtleArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtle_interfaces__msg__TurtleArray__get_individual_type_description_source(NULL),
    sources[1] = *turtle_interfaces__msg__Turtle__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
