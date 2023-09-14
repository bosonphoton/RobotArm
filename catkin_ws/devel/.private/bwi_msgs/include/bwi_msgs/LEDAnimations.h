// Generated by gencpp from file bwi_msgs/LEDAnimations.msg
// DO NOT EDIT!


#ifndef BWI_MSGS_MESSAGE_LEDANIMATIONS_H
#define BWI_MSGS_MESSAGE_LEDANIMATIONS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace bwi_msgs
{
template <class ContainerAllocator>
struct LEDAnimations_
{
  typedef LEDAnimations_<ContainerAllocator> Type;

  LEDAnimations_()
    : led_animations(0)  {
    }
  LEDAnimations_(const ContainerAllocator& _alloc)
    : led_animations(0)  {
  (void)_alloc;
    }



   typedef uint8_t _led_animations_type;
  _led_animations_type led_animations;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(LEFT_TURN)
  #undef LEFT_TURN
#endif
#if defined(_WIN32) && defined(RIGHT_TURN)
  #undef RIGHT_TURN
#endif
#if defined(_WIN32) && defined(REVERSE)
  #undef REVERSE
#endif
#if defined(_WIN32) && defined(BLOCKED)
  #undef BLOCKED
#endif
#if defined(_WIN32) && defined(UP)
  #undef UP
#endif
#if defined(_WIN32) && defined(DOWN)
  #undef DOWN
#endif
#if defined(_WIN32) && defined(NEED_ASSIST)
  #undef NEED_ASSIST
#endif

  enum {
    LEFT_TURN = 1u,
    RIGHT_TURN = 2u,
    REVERSE = 3u,
    BLOCKED = 4u,
    UP = 5u,
    DOWN = 6u,
    NEED_ASSIST = 7u,
  };


  typedef boost::shared_ptr< ::bwi_msgs::LEDAnimations_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bwi_msgs::LEDAnimations_<ContainerAllocator> const> ConstPtr;

}; // struct LEDAnimations_

typedef ::bwi_msgs::LEDAnimations_<std::allocator<void> > LEDAnimations;

typedef boost::shared_ptr< ::bwi_msgs::LEDAnimations > LEDAnimationsPtr;
typedef boost::shared_ptr< ::bwi_msgs::LEDAnimations const> LEDAnimationsConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bwi_msgs::LEDAnimations_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bwi_msgs::LEDAnimations_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::bwi_msgs::LEDAnimations_<ContainerAllocator1> & lhs, const ::bwi_msgs::LEDAnimations_<ContainerAllocator2> & rhs)
{
  return lhs.led_animations == rhs.led_animations;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::bwi_msgs::LEDAnimations_<ContainerAllocator1> & lhs, const ::bwi_msgs::LEDAnimations_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace bwi_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::LEDAnimations_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bwi_msgs::LEDAnimations_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::LEDAnimations_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bwi_msgs::LEDAnimations_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::LEDAnimations_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bwi_msgs::LEDAnimations_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bwi_msgs::LEDAnimations_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d7b2a068392ac708121e3251cf2dde04";
  }

  static const char* value(const ::bwi_msgs::LEDAnimations_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd7b2a068392ac708ULL;
  static const uint64_t static_value2 = 0x121e3251cf2dde04ULL;
};

template<class ContainerAllocator>
struct DataType< ::bwi_msgs::LEDAnimations_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bwi_msgs/LEDAnimations";
  }

  static const char* value(const ::bwi_msgs::LEDAnimations_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bwi_msgs::LEDAnimations_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# LED Animations\n"
"\n"
"# Action Variables\n"
"uint8 LEFT_TURN = 1\n"
"uint8 RIGHT_TURN = 2\n"
"uint8 REVERSE = 3\n"
"uint8 BLOCKED = 4\n"
"uint8 UP = 5\n"
"uint8 DOWN = 6\n"
"uint8 NEED_ASSIST = 7\n"
"\n"
"# Selects which animation to execute\n"
"\n"
"uint8 led_animations\n"
;
  }

  static const char* value(const ::bwi_msgs::LEDAnimations_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bwi_msgs::LEDAnimations_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.led_animations);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LEDAnimations_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bwi_msgs::LEDAnimations_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bwi_msgs::LEDAnimations_<ContainerAllocator>& v)
  {
    s << indent << "led_animations: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.led_animations);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BWI_MSGS_MESSAGE_LEDANIMATIONS_H