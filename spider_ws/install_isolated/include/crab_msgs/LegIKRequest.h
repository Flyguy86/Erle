// Generated by gencpp from file crab_msgs/LegIKRequest.msg
// DO NOT EDIT!


#ifndef CRAB_MSGS_MESSAGE_LEGIKREQUEST_H
#define CRAB_MSGS_MESSAGE_LEGIKREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <crab_msgs/LegJointsState.h>
#include <crab_msgs/LegPositionState.h>

namespace crab_msgs
{
template <class ContainerAllocator>
struct LegIKRequest_
{
  typedef LegIKRequest_<ContainerAllocator> Type;

  LegIKRequest_()
    : leg_number(0)
    , current_joints()
    , target_position()  {
    }
  LegIKRequest_(const ContainerAllocator& _alloc)
    : leg_number(0)
    , current_joints(_alloc)
    , target_position(_alloc)  {
    }



   typedef int32_t _leg_number_type;
  _leg_number_type leg_number;

   typedef  ::crab_msgs::LegJointsState_<ContainerAllocator>  _current_joints_type;
  _current_joints_type current_joints;

   typedef  ::crab_msgs::LegPositionState_<ContainerAllocator>  _target_position_type;
  _target_position_type target_position;




  typedef boost::shared_ptr< ::crab_msgs::LegIKRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::crab_msgs::LegIKRequest_<ContainerAllocator> const> ConstPtr;

}; // struct LegIKRequest_

typedef ::crab_msgs::LegIKRequest_<std::allocator<void> > LegIKRequest;

typedef boost::shared_ptr< ::crab_msgs::LegIKRequest > LegIKRequestPtr;
typedef boost::shared_ptr< ::crab_msgs::LegIKRequest const> LegIKRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::crab_msgs::LegIKRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::crab_msgs::LegIKRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace crab_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/home/erle/ros_catkin_ws/install_isolated/share/std_msgs/cmake/../msg'], 'crab_msgs': ['/home/erle/spider_ws/src/crab_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::crab_msgs::LegIKRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::crab_msgs::LegIKRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crab_msgs::LegIKRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::crab_msgs::LegIKRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crab_msgs::LegIKRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::crab_msgs::LegIKRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::crab_msgs::LegIKRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bcb4917a6750a0f98ecbb5e98212cbec";
  }

  static const char* value(const ::crab_msgs::LegIKRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbcb4917a6750a0f9ULL;
  static const uint64_t static_value2 = 0x8ecbb5e98212cbecULL;
};

template<class ContainerAllocator>
struct DataType< ::crab_msgs::LegIKRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "crab_msgs/LegIKRequest";
  }

  static const char* value(const ::crab_msgs::LegIKRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::crab_msgs::LegIKRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 leg_number\n\
crab_msgs/LegJointsState current_joints\n\
crab_msgs/LegPositionState target_position\n\
\n\
================================================================================\n\
MSG: crab_msgs/LegJointsState\n\
float64[3] joint\n\
\n\
================================================================================\n\
MSG: crab_msgs/LegPositionState\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::crab_msgs::LegIKRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::crab_msgs::LegIKRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.leg_number);
      stream.next(m.current_joints);
      stream.next(m.target_position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct LegIKRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::crab_msgs::LegIKRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::crab_msgs::LegIKRequest_<ContainerAllocator>& v)
  {
    s << indent << "leg_number: ";
    Printer<int32_t>::stream(s, indent + "  ", v.leg_number);
    s << indent << "current_joints: ";
    s << std::endl;
    Printer< ::crab_msgs::LegJointsState_<ContainerAllocator> >::stream(s, indent + "  ", v.current_joints);
    s << indent << "target_position: ";
    s << std::endl;
    Printer< ::crab_msgs::LegPositionState_<ContainerAllocator> >::stream(s, indent + "  ", v.target_position);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRAB_MSGS_MESSAGE_LEGIKREQUEST_H
