// Generated by gencpp from file mecanum_wheels_msgs/SetVariableRequest.msg
// DO NOT EDIT!


#ifndef MECANUM_WHEELS_MSGS_MESSAGE_SETVARIABLEREQUEST_H
#define MECANUM_WHEELS_MSGS_MESSAGE_SETVARIABLEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/String.h>
#include <std_msgs/String.h>

namespace mecanum_wheels_msgs
{
template <class ContainerAllocator>
struct SetVariableRequest_
{
  typedef SetVariableRequest_<ContainerAllocator> Type;

  SetVariableRequest_()
    : name_json()
    , value_json()  {
    }
  SetVariableRequest_(const ContainerAllocator& _alloc)
    : name_json(_alloc)
    , value_json(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::String_<ContainerAllocator>  _name_json_type;
  _name_json_type name_json;

   typedef  ::std_msgs::String_<ContainerAllocator>  _value_json_type;
  _value_json_type value_json;





  typedef boost::shared_ptr< ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetVariableRequest_

typedef ::mecanum_wheels_msgs::SetVariableRequest_<std::allocator<void> > SetVariableRequest;

typedef boost::shared_ptr< ::mecanum_wheels_msgs::SetVariableRequest > SetVariableRequestPtr;
typedef boost::shared_ptr< ::mecanum_wheels_msgs::SetVariableRequest const> SetVariableRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mecanum_wheels_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'mecanum_wheels_msgs': ['/home/sis/catkin_ws/src/mecanum_wheels/catkin_ws/src/mecanum_wheels_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2ff1d830472a201c84516b10d8265cb7";
  }

  static const char* value(const ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2ff1d830472a201cULL;
  static const uint64_t static_value2 = 0x84516b10d8265cb7ULL;
};

template<class ContainerAllocator>
struct DataType< ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mecanum_wheels_msgs/SetVariableRequest";
  }

  static const char* value(const ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/String name_json\n\
std_msgs/String value_json\n\
\n\
================================================================================\n\
MSG: std_msgs/String\n\
string data\n\
";
  }

  static const char* value(const ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name_json);
      stream.next(m.value_json);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetVariableRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mecanum_wheels_msgs::SetVariableRequest_<ContainerAllocator>& v)
  {
    s << indent << "name_json: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.name_json);
    s << indent << "value_json: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.value_json);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MECANUM_WHEELS_MSGS_MESSAGE_SETVARIABLEREQUEST_H
