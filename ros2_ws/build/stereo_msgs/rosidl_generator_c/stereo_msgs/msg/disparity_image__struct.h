// generated from rosidl_generator_c/resource/msg__struct.h.template

#ifndef STEREO_MSGS_STEREO_MSGS__MSG__DISPARITYIMAGE__STRUCT_H_
#define STEREO_MSGS_STEREO_MSGS__MSG__DISPARITYIMAGE__STRUCT_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <rosidl_generator_c/arrays.h>

// include message dependencies
#include <std_msgs/Header-c.h>
#include <sensor_msgs/Image-c.h>
#include <sensor_msgs/RegionOfInterest-c.h>

// types for static array fields

// message struct
typedef struct stereo_msgs__msg__DisparityImage
{
  std_msgs__Header header;
  sensor_msgs__Image image;
  float f;
  float t;
  sensor_msgs__RegionOfInterest valid_window;
  float min_disparity;
  float max_disparity;
  float delta_d;
} stereo_msgs__msg__DisparityImage;

// constants

// symbols for arrays of the message type
ROSIDL_GENERATE_ARRAY(stereo_msgs__msg__DisparityImage);

#endif  // STEREO_MSGS_STEREO_MSGS__MSG__DISPARITYIMAGE__STRUCT_H_
