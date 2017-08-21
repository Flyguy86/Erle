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

#ifndef __sensor_msgs__msg__magnetic_field__traits__hpp__
#define __sensor_msgs__msg__magnetic_field__traits__hpp__

#include "sensor_msgs/msg/magnetic_field__struct.hpp"


template<>
struct has_fixed_size<sensor_msgs::msg::MagneticField>
{
  static const bool value = has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value;
};

#endif  /* __sensor_msgs__msg__magnetic_field__traits__hpp__ */

}  /* rosidl_generator_cpp_traits */
