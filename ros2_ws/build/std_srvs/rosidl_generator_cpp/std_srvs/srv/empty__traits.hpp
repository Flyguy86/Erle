// generated from rosidl_generator_cpp/resource/srv__traits.hpp.template


#include "std_srvs/srv/empty__struct.hpp"

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size {};

#endif  /* __ROSIDL_GENERATOR_CPP_TRAITS */

#ifndef __std_srvs__srv__empty__traits__hpp__
#define __std_srvs__srv__empty__traits__hpp__
template <>
struct has_fixed_size<std_srvs::srv::Empty>
{
  static const bool value = has_fixed_size<std_srvs::srv::Empty_Request>::value
    && has_fixed_size<std_srvs::srv::Empty_Response>::value;
};

#endif  // __std_srvs__srv__empty__traits__hpp__
}  /* rosidl_generator_traits */
