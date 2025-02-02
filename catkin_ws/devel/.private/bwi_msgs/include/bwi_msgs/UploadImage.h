// Generated by gencpp from file bwi_msgs/UploadImage.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_UPLOADIMAGE_H
#define BWI_MSGS_MESSAGE_UPLOADIMAGE_H

#include <ros/service_traits.h>


#include <bwi_msgs/UploadImageRequest.h>
#include <bwi_msgs/UploadImageResponse.h>


namespace bwi_msgs
{

struct UploadImage
{

typedef UploadImageRequest Request;
typedef UploadImageResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct UploadImage
} // namespace bwi_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::bwi_msgs::UploadImage > {
  static const char* value()
  {
    return "d0a1dd2b119f426ba6a9161ec730c8eb";
  }

  static const char* value(const ::bwi_msgs::UploadImage&) { return value(); }
};

template<>
struct DataType< ::bwi_msgs::UploadImage > {
  static const char* value()
  {
    return "bwi_msgs/UploadImage";
  }

  static const char* value(const ::bwi_msgs::UploadImage&) { return value(); }
};


// service_traits::MD5Sum< ::bwi_msgs::UploadImageRequest> should match
// service_traits::MD5Sum< ::bwi_msgs::UploadImage >
template<>
struct MD5Sum< ::bwi_msgs::UploadImageRequest>
{
  static const char* value()
  {
    return MD5Sum< ::bwi_msgs::UploadImage >::value();
  }
  static const char* value(const ::bwi_msgs::UploadImageRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::bwi_msgs::UploadImageRequest> should match
// service_traits::DataType< ::bwi_msgs::UploadImage >
template<>
struct DataType< ::bwi_msgs::UploadImageRequest>
{
  static const char* value()
  {
    return DataType< ::bwi_msgs::UploadImage >::value();
  }
  static const char* value(const ::bwi_msgs::UploadImageRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::bwi_msgs::UploadImageResponse> should match
// service_traits::MD5Sum< ::bwi_msgs::UploadImage >
template<>
struct MD5Sum< ::bwi_msgs::UploadImageResponse>
{
  static const char* value()
  {
    return MD5Sum< ::bwi_msgs::UploadImage >::value();
  }
  static const char* value(const ::bwi_msgs::UploadImageResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::bwi_msgs::UploadImageResponse> should match
// service_traits::DataType< ::bwi_msgs::UploadImage >
template<>
struct DataType< ::bwi_msgs::UploadImageResponse>
{
  static const char* value()
  {
    return DataType< ::bwi_msgs::UploadImage >::value();
  }
  static const char* value(const ::bwi_msgs::UploadImageResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BWI_MSGS_MESSAGE_UPLOADIMAGE_H
