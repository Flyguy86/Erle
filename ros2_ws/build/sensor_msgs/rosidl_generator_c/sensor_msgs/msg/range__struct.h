// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef SENSOR_MSGS_SENSOR_MSGS__MSG__RANGE__STRUCT_H_
#define SENSOR_MSGS_SENSOR_MSGS__MSG__RANGE__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>

// types for static array fields

// message struct
typedef struct sensor_msgs__msg__Range
{
  std_msgs__Header header;
  uint8_t radiation_type;
  float field_of_view;
  float min_range;
  float max_range;
  float range;
} sensor_msgs__msg__Range;

// constants
enum
{
  sensor_msgs__msg__Range__ULTRASOUND = 0u
};
enum
{
  sensor_msgs__msg__Range__INFRARED = 1u
};

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(sensor_msgs__msg__Range);

#endif  // SENSOR_MSGS_SENSOR_MSGS__MSG__RANGE__STRUCT_H_
