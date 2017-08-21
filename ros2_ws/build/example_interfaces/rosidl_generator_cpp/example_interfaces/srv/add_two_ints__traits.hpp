// generated from rosidl_generator_cpp/resource/srv__traits.hpp.template


#include "example_interfaces/srv/add_two_ints__struct.hpp"

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size {};

#endif  /* __ROSIDL_GENERATOR_CPP_TRAITS */

#ifndef __example_interfaces__srv__add_two_ints__traits__hpp__
#define __example_interfaces__srv__add_two_ints__traits__hpp__
template <>
struct has_fixed_size<example_interfaces::srv::AddTwoInts>
{
  static const bool value = has_fixed_size<example_interfaces::srv::AddTwoInts_Request>::value
    && has_fixed_size<example_interfaces::srv::AddTwoInts_Response>::value;
};

#endif  // __example_interfaces__srv__add_two_ints__traits__hpp__
}  /* rosidl_generator_traits */
