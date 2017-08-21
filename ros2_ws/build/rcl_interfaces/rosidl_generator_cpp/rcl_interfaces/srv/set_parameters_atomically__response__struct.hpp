// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __rcl_interfaces__srv__set_parameters_atomically__response__struct__hpp__
#define __rcl_interfaces__srv__set_parameters_atomically__response__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include <rcl_interfaces/msg/set_parameters_result.hpp>

#ifndef _WIN32
# define DEPRECATED_rcl_interfaces_srv_SetParametersAtomically_Response __attribute__((deprecated))
#else
# define DEPRECATED_rcl_interfaces_srv_SetParametersAtomically_Response __declspec(deprecated)
#endif

namespace rcl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetParametersAtomically_Response_
{
  using Type = SetParametersAtomically_Response_<ContainerAllocator>;

  SetParametersAtomically_Response_()
  {
  }
  SetParametersAtomically_Response_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }

  // field types and members
  using _result_type =
      rcl_interfaces::msg::SetParametersResult_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type * set__result(const rcl_interfaces::msg::SetParametersResult_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_rcl_interfaces_srv_SetParametersAtomically_Response
    std::shared_ptr<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_rcl_interfaces_srv_SetParametersAtomically_Response
    std::shared_ptr<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetParametersAtomically_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetParametersAtomically_Response_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct SetParametersAtomically_Response_

// alias to use template instance with default allocator
using SetParametersAtomically_Response =
    rcl_interfaces::srv::SetParametersAtomically_Response_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace rcl_interfaces

#endif  // __rcl_interfaces__srv__set_parameters_atomically__response__struct__hpp__
