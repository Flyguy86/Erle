// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __rosidl_generator_cpp__msg__bounded_array_static__struct__hpp__
#define __rosidl_generator_cpp__msg__bounded_array_static__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include <rosidl_generator_cpp/msg/primitives_static.hpp>

#ifndef _WIN32
# define DEPRECATED_rosidl_generator_cpp_msg_BoundedArrayStatic __attribute__((deprecated))
#else
# define DEPRECATED_rosidl_generator_cpp_msg_BoundedArrayStatic __declspec(deprecated)
#endif

namespace rosidl_generator_cpp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundedArrayStatic_
{
  using Type = BoundedArrayStatic_<ContainerAllocator>;

  BoundedArrayStatic_()
  {
  }
  BoundedArrayStatic_(const ContainerAllocator & _alloc)
  : primitive_values(_alloc)
  {
  }

  // field types and members
  using _primitive_values_type =
      std::array<rosidl_generator_cpp::msg::PrimitivesStatic_<ContainerAllocator>, 3>;
  _primitive_values_type primitive_values;

  // setters for named parameter idiom
  Type * set__primitive_values(const std::array<rosidl_generator_cpp::msg::PrimitivesStatic_<ContainerAllocator>, 3> & _arg)
  {
    this->primitive_values = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    rosidl_generator_cpp::msg::BoundedArrayStatic_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_generator_cpp::msg::BoundedArrayStatic_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_generator_cpp::msg::BoundedArrayStatic_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_generator_cpp::msg::BoundedArrayStatic_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<rosidl_generator_cpp::msg::BoundedArrayStatic_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_cpp::msg::BoundedArrayStatic_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<rosidl_generator_cpp::msg::BoundedArrayStatic_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_cpp::msg::BoundedArrayStatic_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_generator_cpp::msg::BoundedArrayStatic_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_generator_cpp::msg::BoundedArrayStatic_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_rosidl_generator_cpp_msg_BoundedArrayStatic
    std::shared_ptr<rosidl_generator_cpp::msg::BoundedArrayStatic_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_rosidl_generator_cpp_msg_BoundedArrayStatic
    std::shared_ptr<rosidl_generator_cpp::msg::BoundedArrayStatic_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundedArrayStatic_ & other) const
  {
    if (this->primitive_values != other.primitive_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundedArrayStatic_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct BoundedArrayStatic_

// alias to use template instance with default allocator
using BoundedArrayStatic =
    rosidl_generator_cpp::msg::BoundedArrayStatic_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace rosidl_generator_cpp

#endif  // __rosidl_generator_cpp__msg__bounded_array_static__struct__hpp__
