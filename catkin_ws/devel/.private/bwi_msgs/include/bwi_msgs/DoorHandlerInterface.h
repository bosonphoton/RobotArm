// Generated by gencpp from file bwi_msgs/DoorHandlerInterface.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_DOORHANDLERINTERFACE_H
#define BWI_MSGS_MESSAGE_DOORHANDLERINTERFACE_H

#include <ros/service_traits.h>


#include <bwi_msgs/DoorHandlerInterfaceRequest.h>
#include <bwi_msgs/DoorHandlerInterfaceResponse.h>


namespace bwi_msgs
{

struct DoorHandlerInterface
{

typedef DoorHandlerInterfaceRequest Request;
typedef DoorHandlerInterfaceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DoorHandlerInterface
} // namespace bwi_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::bwi_msgs::DoorHandlerInterface > {
  static const char* value()
  {
    return "23814681e0b187a587931a833fabf925";
  }

  static const char* value(const ::bwi_msgs::DoorHandlerInterface&) { return value(); }
};

template<>
struct DataType< ::bwi_msgs::DoorHandlerInterface > {
  static const char* value()
  {
    return "bwi_msgs/DoorHandlerInterface";
  }

  static const char* value(const ::bwi_msgs::DoorHandlerInterface&) { return value(); }
};


// service_traits::MD5Sum< ::bwi_msgs::DoorHandlerInterfaceRequest> should match
// service_traits::MD5Sum< ::bwi_msgs::DoorHandlerInterface >
template<>
struct MD5Sum< ::bwi_msgs::DoorHandlerInterfaceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::bwi_msgs::DoorHandlerInterface >::value();
  }
  static const char* value(const ::bwi_msgs::DoorHandlerInterfaceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::bwi_msgs::DoorHandlerInterfaceRequest> should match
// service_traits::DataType< ::bwi_msgs::DoorHandlerInterface >
template<>
struct DataType< ::bwi_msgs::DoorHandlerInterfaceRequest>
{
  static const char* value()
  {
    return DataType< ::bwi_msgs::DoorHandlerInterface >::value();
  }
  static const char* value(const ::bwi_msgs::DoorHandlerInterfaceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::bwi_msgs::DoorHandlerInterfaceResponse> should match
// service_traits::MD5Sum< ::bwi_msgs::DoorHandlerInterface >
template<>
struct MD5Sum< ::bwi_msgs::DoorHandlerInterfaceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::bwi_msgs::DoorHandlerInterface >::value();
  }
  static const char* value(const ::bwi_msgs::DoorHandlerInterfaceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::bwi_msgs::DoorHandlerInterfaceResponse> should match
// service_traits::DataType< ::bwi_msgs::DoorHandlerInterface >
template<>
struct DataType< ::bwi_msgs::DoorHandlerInterfaceResponse>
{
  static const char* value()
  {
    return DataType< ::bwi_msgs::DoorHandlerInterface >::value();
  }
  static const char* value(const ::bwi_msgs::DoorHandlerInterfaceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BWI_MSGS_MESSAGE_DOORHANDLERINTERFACE_H
