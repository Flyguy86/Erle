// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef SENSOR_MSGS_SENSOR_MSGS__MSG__POINTFIELD__STRUCT_H_
#define SENSOR_MSGS_SENSOR_MSGS__MSG__POINTFIELD__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies

// types for static array fields

// message struct
typedef struct sensor_msgs__msg__PointField
{
  char * name;
  uint32_t offset;
  uint8_t datatype;
  uint32_t count;
} sensor_msgs__msg__PointField;

// constants
enum
{
  sensor_msgs__msg__PointField__INT8 = 1u
};
enum
{
  sensor_msgs__msg__PointField__UINT8 = 2u
};
enum
{
  sensor_msgs__msg__PointField__INT16 = 3u
};
enum
{
  sensor_msgs__msg__PointField__UINT16 = 4u
};
enum
{
  sensor_msgs__msg__PointField__INT32 = 5u
};
enum
{
  sensor_msgs__msg__PointField__UINT32 = 6u
};
enum
{
  sensor_msgs__msg__PointField__FLOAT32 = 7u
};
enum
{
  sensor_msgs__msg__PointField__FLOAT64 = 8u
};

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(sensor_msgs__msg__PointField);

#endif  // SENSOR_MSGS_SENSOR_MSGS__MSG__POINTFIELD__STRUCT_H_
