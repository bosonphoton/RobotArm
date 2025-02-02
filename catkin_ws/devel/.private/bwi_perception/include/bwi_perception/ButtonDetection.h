// Generated by gencpp from file bwi_perception/ButtonDetection.msg
// DO NOT EDIT!


#ifndef BWI_PERCEPTION_MESSAGE_BUTTONDETECTION_H
#define BWI_PERCEPTION_MESSAGE_BUTTONDETECTION_H

#include <ros/service_traits.h>


#include <bwi_perception/ButtonDetectionRequest.h>
#include <bwi_perception/ButtonDetectionResponse.h>


namespace bwi_perception
{

struct ButtonDetection
{

typedef ButtonDetectionRequest Request;
typedef ButtonDetectionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ButtonDetection
} // namespace bwi_perception


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::bwi_perception::ButtonDetection > {
  static const char* value()
  {
    return "db92d35083261fda0bc93a2e246a3490";
  }

  static const char* value(const ::bwi_perception::ButtonDetection&) { return value(); }
};

template<>
struct DataType< ::bwi_perception::ButtonDetection > {
  static const char* value()
  {
    return "bwi_perception/ButtonDetection";
  }

  static const char* value(const ::bwi_perception::ButtonDetection&) { return value(); }
};


// service_traits::MD5Sum< ::bwi_perception::ButtonDetectionRequest> should match
// service_traits::MD5Sum< ::bwi_perception::ButtonDetection >
template<>
struct MD5Sum< ::bwi_perception::ButtonDetectionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::bwi_perception::ButtonDetection >::value();
  }
  static const char* value(const ::bwi_perception::ButtonDetectionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::bwi_perception::ButtonDetectionRequest> should match
// service_traits::DataType< ::bwi_perception::ButtonDetection >
template<>
struct DataType< ::bwi_perception::ButtonDetectionRequest>
{
  static const char* value()
  {
    return DataType< ::bwi_perception::ButtonDetection >::value();
  }
  static const char* value(const ::bwi_perception::ButtonDetectionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::bwi_perception::ButtonDetectionResponse> should match
// service_traits::MD5Sum< ::bwi_perception::ButtonDetection >
template<>
struct MD5Sum< ::bwi_perception::ButtonDetectionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::bwi_perception::ButtonDetection >::value();
  }
  static const char* value(const ::bwi_perception::ButtonDetectionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::bwi_perception::ButtonDetectionResponse> should match
// service_traits::DataType< ::bwi_perception::ButtonDetection >
template<>
struct DataType< ::bwi_perception::ButtonDetectionResponse>
{
  static const char* value()
  {
    return DataType< ::bwi_perception::ButtonDetection >::value();
  }
  static const char* value(const ::bwi_perception::ButtonDetectionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BWI_PERCEPTION_MESSAGE_BUTTONDETECTION_H
