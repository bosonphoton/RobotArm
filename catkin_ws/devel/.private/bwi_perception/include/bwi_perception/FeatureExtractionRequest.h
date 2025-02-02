// Generated by gencpp from file bwi_perception/FeatureExtractionRequest.msg
// DO NOT EDIT!


#ifndef BWI_PERCEPTION_MESSAGE_FEATUREEXTRACTIONREQUEST_H
#define BWI_PERCEPTION_MESSAGE_FEATUREEXTRACTIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/PointCloud2.h>

namespace bwi_perception
{
template <class ContainerAllocator>
struct FeatureExtractionRequest_
{
  typedef FeatureExtractionRequest_<ContainerAllocator> Type;

  FeatureExtractionRequest_()
    : cloud()
    , params_int()  {
    }
  FeatureExtractionRequest_(const ContainerAllocator& _alloc)
    : cloud(_alloc)
    , params_int(_alloc)  {
  (void)_alloc;
    }



   typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _cloud_type;
  _cloud_type cloud;

   typedef std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> _params_int_type;
  _params_int_type params_int;





  typedef boost::shared_ptr< ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct FeatureExtractionRequest_

typedef ::bwi_perception::FeatureExtractionRequest_<std::allocator<void> > FeatureExtractionRequest;

typedef boost::shared_ptr< ::bwi_perception::FeatureExtractionRequest > FeatureExtractionRequestPtr;
typedef boost::shared_ptr< ::bwi_perception::FeatureExtractionRequest const> FeatureExtractionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator1> & lhs, const ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.cloud == rhs.cloud &&
    lhs.params_int == rhs.params_int;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator1> & lhs, const ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bwi_perception

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c8417920731f00ba50951cdad4569f94";
  }

  static const char* value(const ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc8417920731f00baULL;
  static const uint64_t static_value2 = 0x50951cdad4569f94ULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_perception/FeatureExtractionRequest";
  }

  static const char* value(const ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/PointCloud2 cloud\n"
"int8[] params_int\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/PointCloud2\n"
"# This message holds a collection of N-dimensional points, which may\n"
"# contain additional information such as normals, intensity, etc. The\n"
"# point data is stored as a binary blob, its layout described by the\n"
"# contents of the \"fields\" array.\n"
"\n"
"# The point cloud data may be organized 2d (image-like) or 1d\n"
"# (unordered). Point clouds organized as 2d images may be produced by\n"
"# camera depth sensors such as stereo or time-of-flight.\n"
"\n"
"# Time of sensor data acquisition, and the coordinate frame ID (for 3d\n"
"# points).\n"
"Header header\n"
"\n"
"# 2D structure of the point cloud. If the cloud is unordered, height is\n"
"# 1 and width is the length of the point cloud.\n"
"uint32 height\n"
"uint32 width\n"
"\n"
"# Describes the channels and their layout in the binary data blob.\n"
"PointField[] fields\n"
"\n"
"bool    is_bigendian # Is this data bigendian?\n"
"uint32  point_step   # Length of a point in bytes\n"
"uint32  row_step     # Length of a row in bytes\n"
"uint8[] data         # Actual point data, size is (row_step*height)\n"
"\n"
"bool is_dense        # True if there are no invalid points\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/PointField\n"
"# This message holds the description of one point entry in the\n"
"# PointCloud2 message format.\n"
"uint8 INT8    = 1\n"
"uint8 UINT8   = 2\n"
"uint8 INT16   = 3\n"
"uint8 UINT16  = 4\n"
"uint8 INT32   = 5\n"
"uint8 UINT32  = 6\n"
"uint8 FLOAT32 = 7\n"
"uint8 FLOAT64 = 8\n"
"\n"
"string name      # Name of field\n"
"uint32 offset    # Offset from start of point struct\n"
"uint8  datatype  # Datatype enumeration, see above\n"
"uint32 count     # How many elements in the field\n"
;
  }

  static const char* value(const ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cloud);
      stream.next(m.params_int);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FeatureExtractionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_perception::FeatureExtractionRequest_<ContainerAllocator>& v)
  {
    s << indent << "cloud: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.cloud);
    s << indent << "params_int[]" << std::endl;
    for (size_t i = 0; i < v.params_int.size(); ++i)
    {
      s << indent << "  params_int[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.params_int[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_PERCEPTION_MESSAGE_FEATUREEXTRACTIONREQUEST_H
