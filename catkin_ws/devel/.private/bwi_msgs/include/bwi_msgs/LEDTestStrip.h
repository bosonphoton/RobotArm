// Generated by gencpp from file bwi_msgs/LEDTestStrip.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_LEDTESTSTRIP_H
#define BWI_MSGS_MESSAGE_LEDTESTSTRIP_H

#include <ros/service_traits.h>


#include <bwi_msgs/LEDTestStripRequest.h>
#include <bwi_msgs/LEDTestStripResponse.h>


namespace bwi_msgs
{

struct LEDTestStrip
{

typedef LEDTestStripRequest Request;
typedef LEDTestStripResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct LEDTestStrip
} // namespace bwi_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::bwi_msgs::LEDTestStrip > {
  static const char* value()
  {
    return "d871d678836b58f63622ed041e410e26";
  }

  static const char* value(const ::bwi_msgs::LEDTestStrip&) { return value(); }
};

template<>
struct DataType< ::bwi_msgs::LEDTestStrip > {
  static const char* value()
  {
    return "bwi_msgs/LEDTestStrip";
  }

  static const char* value(const ::bwi_msgs::LEDTestStrip&) { return value(); }
};


// service_traits::MD5Sum< ::bwi_msgs::LEDTestStripRequest> should match
// service_traits::MD5Sum< ::bwi_msgs::LEDTestStrip >
template<>
struct MD5Sum< ::bwi_msgs::LEDTestStripRequest>
{
  static const char* value()
  {
    return MD5Sum< ::bwi_msgs::LEDTestStrip >::value();
  }
  static const char* value(const ::bwi_msgs::LEDTestStripRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::bwi_msgs::LEDTestStripRequest> should match
// service_traits::DataType< ::bwi_msgs::LEDTestStrip >
template<>
struct DataType< ::bwi_msgs::LEDTestStripRequest>
{
  static const char* value()
  {
    return DataType< ::bwi_msgs::LEDTestStrip >::value();
  }
  static const char* value(const ::bwi_msgs::LEDTestStripRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::bwi_msgs::LEDTestStripResponse> should match
// service_traits::MD5Sum< ::bwi_msgs::LEDTestStrip >
template<>
struct MD5Sum< ::bwi_msgs::LEDTestStripResponse>
{
  static const char* value()
  {
    return MD5Sum< ::bwi_msgs::LEDTestStrip >::value();
  }
  static const char* value(const ::bwi_msgs::LEDTestStripResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::bwi_msgs::LEDTestStripResponse> should match
// service_traits::DataType< ::bwi_msgs::LEDTestStrip >
template<>
struct DataType< ::bwi_msgs::LEDTestStripResponse>
{
  static const char* value()
  {
    return DataType< ::bwi_msgs::LEDTestStrip >::value();
  }
  static const char* value(const ::bwi_msgs::LEDTestStripResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BWI_MSGS_MESSAGE_LEDTESTSTRIP_H
