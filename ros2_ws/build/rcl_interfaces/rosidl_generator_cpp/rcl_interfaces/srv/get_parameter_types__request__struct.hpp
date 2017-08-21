// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __rcl_interfaces__srv__get_parameter_types__request__struct__hpp__
#define __rcl_interfaces__srv__get_parameter_types__request__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_rcl_interfaces_srv_GetParameterTypes_Request __attribute__((deprecated))
#else
# define DEPRECATED_rcl_interfaces_srv_GetParameterTypes_Request __declspec(deprecated)
#endif

namespace rcl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetParameterTypes_Request_
{
  using Type = GetParameterTypes_Request_<ContainerAllocator>;

  GetParameterTypes_Request_()
  {
  }
  GetParameterTypes_Request_(const ContainerAllocator & _alloc)
  : names(_alloc)
  {
  }

  // field types and members
  using _names_type =
      std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _names_type names;

  // setters for named parameter idiom
  Type * set__names(const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->names = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    rcl_interfaces::srv::GetParameterTypes_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rcl_interfaces::srv::GetParameterTypes_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rcl_interfaces::srv::GetParameterTypes_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rcl_interfaces::srv::GetParameterTypes_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<rcl_interfaces::srv::GetParameterTypes_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::srv::GetParameterTypes_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<rcl_interfaces::srv::GetParameterTypes_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::srv::GetParameterTypes_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rcl_interfaces::srv::GetParameterTypes_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rcl_interfaces::srv::GetParameterTypes_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_rcl_interfaces_srv_GetParameterTypes_Request
    std::shared_ptr<rcl_interfaces::srv::GetParameterTypes_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_rcl_interfaces_srv_GetParameterTypes_Request
    std::shared_ptr<rcl_interfaces::srv::GetParameterTypes_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetParameterTypes_Request_ & other) const
  {
    if (this->names != other.names) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetParameterTypes_Request_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct GetParameterTypes_Request_

// alias to use template instance with default allocator
using GetParameterTypes_Request =
    rcl_interfaces::srv::GetParameterTypes_Request_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace rcl_interfaces

#endif  // __rcl_interfaces__srv__get_parameter_types__request__struct__hpp__
