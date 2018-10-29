// Generated by gencpp from file mecanum_wheels_msgs/SetFSMState.msg
// DO NOT EDIT!


#ifndef MECANUM_WHEELS_MSGS_MESSAGE_SETFSMSTATE_H
#define MECANUM_WHEELS_MSGS_MESSAGE_SETFSMSTATE_H

#include <ros/service_traits.h>


#include <mecanum_wheels_msgs/SetFSMStateRequest.h>
#include <mecanum_wheels_msgs/SetFSMStateResponse.h>


namespace mecanum_wheels_msgs
{

struct SetFSMState
{

typedef SetFSMStateRequest Request;
typedef SetFSMStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetFSMState
} // namespace mecanum_wheels_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mecanum_wheels_msgs::SetFSMState > {
  static const char* value()
  {
    return "af6d3a99f0fbeb66d3248fa4b3e675fb";
  }

  static const char* value(const ::mecanum_wheels_msgs::SetFSMState&) { return value(); }
};

template<>
struct DataType< ::mecanum_wheels_msgs::SetFSMState > {
  static const char* value()
  {
    return "mecanum_wheels_msgs/SetFSMState";
  }

  static const char* value(const ::mecanum_wheels_msgs::SetFSMState&) { return value(); }
};


// service_traits::MD5Sum< ::mecanum_wheels_msgs::SetFSMStateRequest> should match 
// service_traits::MD5Sum< ::mecanum_wheels_msgs::SetFSMState > 
template<>
struct MD5Sum< ::mecanum_wheels_msgs::SetFSMStateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mecanum_wheels_msgs::SetFSMState >::value();
  }
  static const char* value(const ::mecanum_wheels_msgs::SetFSMStateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mecanum_wheels_msgs::SetFSMStateRequest> should match 
// service_traits::DataType< ::mecanum_wheels_msgs::SetFSMState > 
template<>
struct DataType< ::mecanum_wheels_msgs::SetFSMStateRequest>
{
  static const char* value()
  {
    return DataType< ::mecanum_wheels_msgs::SetFSMState >::value();
  }
  static const char* value(const ::mecanum_wheels_msgs::SetFSMStateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mecanum_wheels_msgs::SetFSMStateResponse> should match 
// service_traits::MD5Sum< ::mecanum_wheels_msgs::SetFSMState > 
template<>
struct MD5Sum< ::mecanum_wheels_msgs::SetFSMStateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mecanum_wheels_msgs::SetFSMState >::value();
  }
  static const char* value(const ::mecanum_wheels_msgs::SetFSMStateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mecanum_wheels_msgs::SetFSMStateResponse> should match 
// service_traits::DataType< ::mecanum_wheels_msgs::SetFSMState > 
template<>
struct DataType< ::mecanum_wheels_msgs::SetFSMStateResponse>
{
  static const char* value()
  {
    return DataType< ::mecanum_wheels_msgs::SetFSMState >::value();
  }
  static const char* value(const ::mecanum_wheels_msgs::SetFSMStateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MECANUM_WHEELS_MSGS_MESSAGE_SETFSMSTATE_H
