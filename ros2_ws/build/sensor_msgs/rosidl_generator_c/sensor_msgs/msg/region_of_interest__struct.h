// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef SENSOR_MSGS_SENSOR_MSGS__MSG__REGIONOFINTEREST__STRUCT_H_
#define SENSOR_MSGS_SENSOR_MSGS__MSG__REGIONOFINTEREST__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies

// types for static array fields

// message struct
typedef struct sensor_msgs__msg__RegionOfInterest
{
  uint32_t x_offset;
  uint32_t y_offset;
  uint32_t height;
  uint32_t width;
  bool do_rectify;
} sensor_msgs__msg__RegionOfInterest;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(sensor_msgs__msg__RegionOfInterest);

#endif  // SENSOR_MSGS_SENSOR_MSGS__MSG__REGIONOFINTEREST__STRUCT_H_
