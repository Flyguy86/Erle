// generated from rosidl_generator_cpp/resource/srv__traits.hpp.template


#include "rcl_interfaces/srv/set_parameters_atomically__struct.hpp"

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size {};

#endif  /* __ROSIDL_GENERATOR_CPP_TRAITS */

#ifndef __rcl_interfaces__srv__set_parameters_atomically__traits__hpp__
#define __rcl_interfaces__srv__set_parameters_atomically__traits__hpp__
template <>
struct has_fixed_size<rcl_interfaces::srv::SetParametersAtomically>
{
  static const bool value = has_fixed_size<rcl_interfaces::srv::SetParametersAtomically_Request>::value
    && has_fixed_size<rcl_interfaces::srv::SetParametersAtomically_Response>::value;
};

#endif  // __rcl_interfaces__srv__set_parameters_atomically__traits__hpp__
}  /* rosidl_generator_traits */
