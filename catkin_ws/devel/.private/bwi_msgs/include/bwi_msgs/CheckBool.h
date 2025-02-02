// Generated by gencpp from file bwi_msgs/CheckBool.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_CHECKBOOL_H
#define BWI_MSGS_MESSAGE_CHECKBOOL_H

#include <ros/service_traits.h>


#include <bwi_msgs/CheckBoolRequest.h>
#include <bwi_msgs/CheckBoolResponse.h>


namespace bwi_msgs
{

struct CheckBool
{

typedef CheckBoolRequest Request;
typedef CheckBoolResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CheckBool
} // namespace bwi_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::bwi_msgs::CheckBool > {
  static const char* value()
  {
    return "e431d687bf4b2c65fbd94b12ae0cb5d9";
  }

  static const char* value(const ::bwi_msgs::CheckBool&) { return value(); }
};

template<>
struct DataType< ::bwi_msgs::CheckBool > {
  static const char* value()
  {
    return "bwi_msgs/CheckBool";
  }

  static const char* value(const ::bwi_msgs::CheckBool&) { return value(); }
};


// service_traits::MD5Sum< ::bwi_msgs::CheckBoolRequest> should match
// service_traits::MD5Sum< ::bwi_msgs::CheckBool >
template<>
struct MD5Sum< ::bwi_msgs::CheckBoolRequest>
{
  static const char* value()
  {
    return MD5Sum< ::bwi_msgs::CheckBool >::value();
  }
  static const char* value(const ::bwi_msgs::CheckBoolRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::bwi_msgs::CheckBoolRequest> should match
// service_traits::DataType< ::bwi_msgs::CheckBool >
template<>
struct DataType< ::bwi_msgs::CheckBoolRequest>
{
  static const char* value()
  {
    return DataType< ::bwi_msgs::CheckBool >::value();
  }
  static const char* value(const ::bwi_msgs::CheckBoolRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::bwi_msgs::CheckBoolResponse> should match
// service_traits::MD5Sum< ::bwi_msgs::CheckBool >
template<>
struct MD5Sum< ::bwi_msgs::CheckBoolResponse>
{
  static const char* value()
  {
    return MD5Sum< ::bwi_msgs::CheckBool >::value();
  }
  static const char* value(const ::bwi_msgs::CheckBoolResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::bwi_msgs::CheckBoolResponse> should match
// service_traits::DataType< ::bwi_msgs::CheckBool >
template<>
struct DataType< ::bwi_msgs::CheckBoolResponse>
{
  static const char* value()
  {
    return DataType< ::bwi_msgs::CheckBool >::value();
  }
  static const char* value(const ::bwi_msgs::CheckBoolResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BWI_MSGS_MESSAGE_CHECKBOOL_H
