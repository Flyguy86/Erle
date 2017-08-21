// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef SENSOR_MSGS_SENSOR_MSGS__MSG__JOY__STRUCT_H_
#define SENSOR_MSGS_SENSOR_MSGS__MSG__JOY__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>

// types for static array fields

// message struct
typedef struct sensor_msgs__msg__Joy
{
  std_msgs__Header header;
  ROSIDL_Array__float32 axes;
  ROSIDL_Array__int32 buttons;
} sensor_msgs__msg__Joy;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(sensor_msgs__msg__Joy);

#endif  // SENSOR_MSGS_SENSOR_MSGS__MSG__JOY__STRUCT_H_
