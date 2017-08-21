// generated from rosidl_generator_cpp/resource/msg__traits.hpp.template

#include <array>
#include <stdint.h>
#include <string>
#include <vector>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size {};

#endif  /* __ROSIDL_GENERATOR_CPP_TRAITS */

#ifndef __stereo_msgs__msg__disparity_image__traits__hpp__
#define __stereo_msgs__msg__disparity_image__traits__hpp__

#include "stereo_msgs/msg/disparity_image__struct.hpp"


template<>
struct has_fixed_size<stereo_msgs::msg::DisparityImage>
{
  static const bool value = has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<sensor_msgs::msg::Image>::value && has_fixed_size<sensor_msgs::msg::RegionOfInterest>::value;
};

#endif  /* __stereo_msgs__msg__disparity_image__traits__hpp__ */

}  /* rosidl_generator_cpp_traits */
