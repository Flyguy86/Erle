// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef SENSOR_MSGS_SENSOR_MSGS__MSG__POINTCLOUD__STRUCT_H_
#define SENSOR_MSGS_SENSOR_MSGS__MSG__POINTCLOUD__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>
#include <geometry_msgs/Point32-c.h>
#include <sensor_msgs/ChannelFloat32-c.h>

// types for static array fields

// message struct
typedef struct sensor_msgs__msg__PointCloud
{
  std_msgs__Header header;
  ROSIDL_Array__Point32 points;
  ROSIDL_Array__ChannelFloat32 channels;
} sensor_msgs__msg__PointCloud;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(sensor_msgs__msg__PointCloud);

#endif  // SENSOR_MSGS_SENSOR_MSGS__MSG__POINTCLOUD__STRUCT_H_
