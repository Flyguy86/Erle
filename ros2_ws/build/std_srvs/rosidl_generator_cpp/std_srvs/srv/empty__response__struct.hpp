// generated from rosidl_generator_cpp/resource/msg__struct.hpp.template

#ifndef __std_srvs__srv__empty__response__struct__hpp__
#define __std_srvs__srv__empty__response__struct__hpp__

#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies

#ifndef _WIN32
# define DEPRECATED_std_srvs_srv_Empty_Response __attribute__((deprecated))
#else
# define DEPRECATED_std_srvs_srv_Empty_Response __declspec(deprecated)
#endif

namespace std_srvs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Empty_Response_
{
  using Type = Empty_Response_<ContainerAllocator>;

  Empty_Response_()
  {
  }
  Empty_Response_(const ContainerAllocator & _alloc)
  {
    (void)_alloc;
  }

  // field types and members

  // setters for named parameter idiom

  // constants

  // pointer types
  using RawPtr =
    std_srvs::srv::Empty_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const std_srvs::srv::Empty_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<std_srvs::srv::Empty_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<std_srvs::srv::Empty_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<std_srvs::srv::Empty_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<std_srvs::srv::Empty_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<std_srvs::srv::Empty_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<std_srvs::srv::Empty_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<std_srvs::srv::Empty_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<std_srvs::srv::Empty_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_std_srvs_srv_Empty_Response
    std::shared_ptr<std_srvs::srv::Empty_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_std_srvs_srv_Empty_Response
    std::shared_ptr<std_srvs::srv::Empty_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Empty_Response_ & other) const
  {
    (void)other;
    return true;
  }
  bool operator!=(const Empty_Response_ & other) const
  {
    return !this->operator==(other);
  }

}; // struct Empty_Response_

// alias to use template instance with default allocator
using Empty_Response =
    std_srvs::srv::Empty_Response_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace srv

}  // namespace std_srvs

#endif  // __std_srvs__srv__empty__response__struct__hpp__
