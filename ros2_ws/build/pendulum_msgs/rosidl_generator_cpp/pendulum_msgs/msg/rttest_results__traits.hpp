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

#ifndef __pendulum_msgs__msg__rttest_results__traits__hpp__
#define __pendulum_msgs__msg__rttest_results__traits__hpp__

#include "pendulum_msgs/msg/rttest_results__struct.hpp"


template<>
struct has_fixed_size<pendulum_msgs::msg::RttestResults>
{
  static const bool value = has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<pendulum_msgs::msg::JointCommand>::value && has_fixed_size<pendulum_msgs::msg::JointState>::value;
};

#endif  /* __pendulum_msgs__msg__rttest_results__traits__hpp__ */

}  /* rosidl_generator_cpp_traits */
