// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __rosidl_generator_cpp__msg__empty__struct__hpp__
#define __rosidl_generator_cpp__msg__empty__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_rosidl_generator_cpp_msg_Empty __attribute__((deprecated))
#else
# define DEPRECATED_rosidl_generator_cpp_msg_Empty __declspec(deprecated)
#endif

namespace rosidl_generator_cpp
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Empty_
{
  using Type = Empty_<ContainerAllocator>;

  Empty_()
  {
  }
  Empty_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }

  // field types and members

  // setters for named parameter idiom

  // constants

  // pointer types
  using RawPtr =
    rosidl_generator_cpp::msg::Empty_<ContainerAllocator> *;
  using ConstRawPtr =
    const rosidl_generator_cpp::msg::Empty_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rosidl_generator_cpp::msg::Empty_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rosidl_generator_cpp::msg::Empty_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<rosidl_generator_cpp::msg::Empty_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_cpp::msg::Empty_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<rosidl_generator_cpp::msg::Empty_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rosidl_generator_cpp::msg::Empty_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rosidl_generator_cpp::msg::Empty_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rosidl_generator_cpp::msg::Empty_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_rosidl_generator_cpp_msg_Empty
    std::shared_ptr<rosidl_generator_cpp::msg::Empty_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_rosidl_generator_cpp_msg_Empty
    std::shared_ptr<rosidl_generator_cpp::msg::Empty_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Empty_ & other) const
  {
    (void)other;
    return true;
  }
  bool operator!=(const Empty_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct Empty_

// alias to use template instance with default allocator
using Empty =
    rosidl_generator_cpp::msg::Empty_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace rosidl_generator_cpp

#endif  // __rosidl_generator_cpp__msg__empty__struct__hpp__
