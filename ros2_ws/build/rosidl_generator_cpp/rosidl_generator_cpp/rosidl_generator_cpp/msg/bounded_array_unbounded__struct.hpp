// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __rosidl_generator_cpp__msg__bounded_array_unbounded__struct__hpp__
#define __rosidl_generator_cpp__msg__bounded_array_unbounded__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include <rosidl_generator_cpp/msg/primitives_unbounded.hpp>

#ifndef _WIN32
# define DEPRECATED_rosidl_generator_cpp_msg_BoundedArrayUnbounded __attribute__((deprecated))
#else
# define DEPRECATED_rosidl_generator_cpp_msg_BoundedArrayUnbounded __declspec(deprecated)
#endif

namespace rosidl_generator_cpp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundedArrayUnbounded_
{
  using Type = BoundedArrayUnbounded_<ContainerAllocator>;

  BoundedArrayUnbounded_()
  {
  }
  BoundedArrayUnbounded_(const ContainerAllocator & _alloc)
  : primitive_values(_alloc)
  {
  }

  // field types and members
  using _primitive_values_type =
      std::array<rosidl_generator_cpp::msg::PrimitivesUnbounded_<ContainerAllocator>, 3>;
  _primitive_values_type primitive_values;

  // setters for named parameter idiom
  Type * set__primitive_values(const std::array<rosidl_generator_cpp::msg::PrimitivesUnbounded_<ContainerAllocator>, 3> & _arg)
  {
    this->primitive_values = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
    rosidl_generator_cpp::msg::BoundedArrayUnbounded_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_generator_cpp::msg::BoundedArrayUnbounded_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_generator_cpp::msg::BoundedArrayUnbounded_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_generator_cpp::msg::BoundedArrayUnbounded_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<rosidl_generator_cpp::msg::BoundedArrayUnbounded_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_cpp::msg::BoundedArrayUnbounded_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<rosidl_generator_cpp::msg::BoundedArrayUnbounded_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_cpp::msg::BoundedArrayUnbounded_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_generator_cpp::msg::BoundedArrayUnbounded_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_generator_cpp::msg::BoundedArrayUnbounded_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_rosidl_generator_cpp_msg_BoundedArrayUnbounded
    std::shared_ptr<rosidl_generator_cpp::msg::BoundedArrayUnbounded_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_rosidl_generator_cpp_msg_BoundedArrayUnbounded
    std::shared_ptr<rosidl_generator_cpp::msg::BoundedArrayUnbounded_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundedArrayUnbounded_ & other) const
  {
    if (this->primitive_values != other.primitive_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundedArrayUnbounded_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct BoundedArrayUnbounded_

// alias to use template instance with default allocator
using BoundedArrayUnbounded =
    rosidl_generator_cpp::msg::BoundedArrayUnbounded_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace rosidl_generator_cpp

#endif  // __rosidl_generator_cpp__msg__bounded_array_unbounded__struct__hpp__
