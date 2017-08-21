// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef SENSOR_MSGS_SENSOR_MSGS__MSG__POINTCLOUD2__STRUCT_H_
#define SENSOR_MSGS_SENSOR_MSGS__MSG__POINTCLOUD2__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>
#include <sensor_msgs/PointField-c.h>

// types for static array fields

// message struct
typedef struct sensor_msgs__msg__PointCloud2
{
  std_msgs__Header header;
  uint32_t height;
  uint32_t width;
  ROSIDL_Array__PointField fields;
  bool is_bigendian;
  uint32_t point_step;
  uint32_t row_step;
  ROSIDL_Array__uint8 data;
  bool is_dense;
} sensor_msgs__msg__PointCloud2;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(sensor_msgs__msg__PointCloud2);

#endif  // SENSOR_MSGS_SENSOR_MSGS__MSG__POINTCLOUD2__STRUCT_H_
