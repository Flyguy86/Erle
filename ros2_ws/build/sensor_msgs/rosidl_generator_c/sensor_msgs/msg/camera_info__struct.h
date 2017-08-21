// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef SENSOR_MSGS_SENSOR_MSGS__MSG__CAMERAINFO__STRUCT_H_
#define SENSOR_MSGS_SENSOR_MSGS__MSG__CAMERAINFO__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>
#include <sensor_msgs/RegionOfInterest-c.h>

// types for static array fields
ROSIDL_GENERATE_STATIC_ARRAY(sensor_msgs__msg__CameraInfo, k, double, 9);
ROSIDL_GENERATE_STATIC_ARRAY(sensor_msgs__msg__CameraInfo, r, double, 9);
ROSIDL_GENERATE_STATIC_ARRAY(sensor_msgs__msg__CameraInfo, p, double, 12);

// message struct
typedef struct sensor_msgs__msg__CameraInfo
{
  std_msgs__Header header;
  uint32_t height;
  uint32_t width;
  char * distortion_model;
  ROSIDL_Array__float64 d;
  ROSIDL_Array__sensor_msgs__msg__CameraInfo__k k;
  ROSIDL_Array__sensor_msgs__msg__CameraInfo__r r;
  ROSIDL_Array__sensor_msgs__msg__CameraInfo__p p;
  uint32_t binning_x;
  uint32_t binning_y;
  sensor_msgs__RegionOfInterest roi;
} sensor_msgs__msg__CameraInfo;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(sensor_msgs__msg__CameraInfo);

#endif  // SENSOR_MSGS_SENSOR_MSGS__MSG__CAMERAINFO__STRUCT_H_
