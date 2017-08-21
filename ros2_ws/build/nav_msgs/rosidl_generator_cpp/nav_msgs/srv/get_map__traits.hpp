// generated from rosidl_generator_cpp/resource/srv__traits.hpp.template


#include "nav_msgs/srv/get_map__struct.hpp"

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size {};

#endif  /* __ROSIDL_GENERATOR_CPP_TRAITS */

#ifndef __nav_msgs__srv__get_map__traits__hpp__
#define __nav_msgs__srv__get_map__traits__hpp__
template <>
struct has_fixed_size<nav_msgs::srv::GetMap>
{
  static const bool value = has_fixed_size<nav_msgs::srv::GetMap_Request>::value
    && has_fixed_size<nav_msgs::srv::GetMap_Response>::value;
};

#endif  // __nav_msgs__srv__get_map__traits__hpp__
}  /* rosidl_generator_traits */
