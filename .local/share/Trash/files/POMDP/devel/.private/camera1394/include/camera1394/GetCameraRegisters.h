// Generated by gencpp from file camera1394/GetCameraRegisters.msg
// DO NOT EDIT!


#ifndef CAMERA1394_MESSAGE_GETCAMERAREGISTERS_H
#define CAMERA1394_MESSAGE_GETCAMERAREGISTERS_H

#include <ros/service_traits.h>


#include <camera1394/GetCameraRegistersRequest.h>
#include <camera1394/GetCameraRegistersResponse.h>


namespace camera1394
{

struct GetCameraRegisters
{

typedef GetCameraRegistersRequest Request;
typedef GetCameraRegistersResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetCameraRegisters
} // namespace camera1394


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::camera1394::GetCameraRegisters > {
  static const char* value()
  {
    return "9597d397bc64c4c4fcaf24bbb15f0256";
  }

  static const char* value(const ::camera1394::GetCameraRegisters&) { return value(); }
};

template<>
struct DataType< ::camera1394::GetCameraRegisters > {
  static const char* value()
  {
    return "camera1394/GetCameraRegisters";
  }

  static const char* value(const ::camera1394::GetCameraRegisters&) { return value(); }
};


// service_traits::MD5Sum< ::camera1394::GetCameraRegistersRequest> should match
// service_traits::MD5Sum< ::camera1394::GetCameraRegisters >
template<>
struct MD5Sum< ::camera1394::GetCameraRegistersRequest>
{
  static const char* value()
  {
    return MD5Sum< ::camera1394::GetCameraRegisters >::value();
  }
  static const char* value(const ::camera1394::GetCameraRegistersRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::camera1394::GetCameraRegistersRequest> should match
// service_traits::DataType< ::camera1394::GetCameraRegisters >
template<>
struct DataType< ::camera1394::GetCameraRegistersRequest>
{
  static const char* value()
  {
    return DataType< ::camera1394::GetCameraRegisters >::value();
  }
  static const char* value(const ::camera1394::GetCameraRegistersRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::camera1394::GetCameraRegistersResponse> should match
// service_traits::MD5Sum< ::camera1394::GetCameraRegisters >
template<>
struct MD5Sum< ::camera1394::GetCameraRegistersResponse>
{
  static const char* value()
  {
    return MD5Sum< ::camera1394::GetCameraRegisters >::value();
  }
  static const char* value(const ::camera1394::GetCameraRegistersResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::camera1394::GetCameraRegistersResponse> should match
// service_traits::DataType< ::camera1394::GetCameraRegisters >
template<>
struct DataType< ::camera1394::GetCameraRegistersResponse>
{
  static const char* value()
  {
    return DataType< ::camera1394::GetCameraRegisters >::value();
  }
  static const char* value(const ::camera1394::GetCameraRegistersResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CAMERA1394_MESSAGE_GETCAMERAREGISTERS_H
