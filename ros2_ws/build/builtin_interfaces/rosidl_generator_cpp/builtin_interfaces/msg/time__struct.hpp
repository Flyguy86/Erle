// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __builtin_interfaces__msg__time__struct__hpp__
#define __builtin_interfaces__msg__time__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_builtin_interfaces_msg_Time __attribute__((deprecated))
#else
# define DEPRECATED_builtin_interfaces_msg_Time __declspec(deprecated)
#endif

namespace builtin_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Time_
{
  using Type = Time_<ContainerAllocator>;

  Time_()
  {
  }
  Time_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }

  // field types and members
  using _sec_type =
      int32_t;
  _sec_type sec;
  using _nanosec_type =
      uint32_t;
  _nanosec_type nanosec;

  // setters for named parameter idiom
  Type * set__sec(const int32_t & _arg)
  {
    this->sec = _arg;
    return this;
  }
  Type * set__nanosec(const uint32_t & _arg)
  {
    this->nanosec = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    builtin_interfaces::msg::Time_<ContainerAllocator> *;
  using ConstRawPtr =
    const builtin_interfaces::msg::Time_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<builtin_interfaces::msg::Time_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<builtin_interfaces::msg::Time_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<builtin_interfaces::msg::Time_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<builtin_interfaces::msg::Time_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<builtin_interfaces::msg::Time_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<builtin_interfaces::msg::Time_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<builtin_interfaces::msg::Time_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<builtin_interfaces::msg::Time_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_builtin_interfaces_msg_Time
    std::shared_ptr<builtin_interfaces::msg::Time_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_builtin_interfaces_msg_Time
    std::shared_ptr<builtin_interfaces::msg::Time_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Time_ & other) const
  {
    if (this->sec != other.sec) {
      return false;
    }
    if (this->nanosec != other.nanosec) {
      return false;
    }
    return true;
  }
  bool operator!=(const Time_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct Time_

// alias to use template instance with default allocator
using Time =
    builtin_interfaces::msg::Time_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace builtin_interfaces

#endif  // __builtin_interfaces__msg__time__struct__hpp__
