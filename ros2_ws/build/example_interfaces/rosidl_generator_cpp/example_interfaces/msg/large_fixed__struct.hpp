// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __example_interfaces__msg__large_fixed__struct__hpp__
#define __example_interfaces__msg__large_fixed__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_example_interfaces_msg_LargeFixed __attribute__((deprecated))
#else
# define DEPRECATED_example_interfaces_msg_LargeFixed __declspec(deprecated)
#endif

namespace example_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LargeFixed_
{
  using Type = LargeFixed_<ContainerAllocator>;

  LargeFixed_()
  {
  }
  LargeFixed_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }

  // field types and members
  using _data_type =
      std::array<int32_t, 255>;
  _data_type data;

  // setters for named parameter idiom
  Type * set__data(const std::array<int32_t, 255> & _arg)
  {
    this->data = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    example_interfaces::msg::LargeFixed_<ContainerAllocator> *;
  using ConstRawPtr =
    const example_interfaces::msg::LargeFixed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<example_interfaces::msg::LargeFixed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<example_interfaces::msg::LargeFixed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<example_interfaces::msg::LargeFixed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::msg::LargeFixed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<example_interfaces::msg::LargeFixed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<example_interfaces::msg::LargeFixed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<example_interfaces::msg::LargeFixed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<example_interfaces::msg::LargeFixed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_example_interfaces_msg_LargeFixed
    std::shared_ptr<example_interfaces::msg::LargeFixed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_example_interfaces_msg_LargeFixed
    std::shared_ptr<example_interfaces::msg::LargeFixed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LargeFixed_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const LargeFixed_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct LargeFixed_

// alias to use template instance with default allocator
using LargeFixed =
    example_interfaces::msg::LargeFixed_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace example_interfaces

#endif  // __example_interfaces__msg__large_fixed__struct__hpp__
