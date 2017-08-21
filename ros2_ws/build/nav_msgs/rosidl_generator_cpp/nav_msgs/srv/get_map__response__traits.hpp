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

#ifndef __nav_msgs__srv__get_map__response__traits__hpp__
#define __nav_msgs__srv__get_map__response__traits__hpp__

#include "nav_msgs/srv/get_map__response__struct.hpp"


template<>
struct has_fixed_size<nav_msgs::srv::GetMap_Response>
{
  static const bool value = has_fixed_size<nav_msgs::msg::OccupancyGrid>::value;
};

#endif  /* __nav_msgs__srv__get_map__response__traits__hpp__ */

}  /* rosidl_generator_cpp_traits */
