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

#ifndef __nav_msgs__msg__map_meta_data__traits__hpp__
#define __nav_msgs__msg__map_meta_data__traits__hpp__

#include "nav_msgs/msg/map_meta_data__struct.hpp"


template<>
struct has_fixed_size<nav_msgs::msg::MapMetaData>
{
  static const bool value = has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Pose>::value;
};

#endif  /* __nav_msgs__msg__map_meta_data__traits__hpp__ */

}  /* rosidl_generator_cpp_traits */
