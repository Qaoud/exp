// Generated by gencpp from file custom_messages/play_poseRequest.msg
// DO NOT EDIT!


#ifndef CUSTOM_MESSAGES_MESSAGE_PLAY_POSEREQUEST_H
#define CUSTOM_MESSAGES_MESSAGE_PLAY_POSEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace custom_messages
{
template <class ContainerAllocator>
struct play_poseRequest_
{
  typedef play_poseRequest_<ContainerAllocator> Type;

  play_poseRequest_()
    : play_pose_x(0.0)
    , play_pose_y(0.0)  {
    }
  play_poseRequest_(const ContainerAllocator& _alloc)
    : play_pose_x(0.0)
    , play_pose_y(0.0)  {
  (void)_alloc;
    }



   typedef float _play_pose_x_type;
  _play_pose_x_type play_pose_x;

   typedef float _play_pose_y_type;
  _play_pose_y_type play_pose_y;





  typedef boost::shared_ptr< ::custom_messages::play_poseRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::custom_messages::play_poseRequest_<ContainerAllocator> const> ConstPtr;

}; // struct play_poseRequest_

typedef ::custom_messages::play_poseRequest_<std::allocator<void> > play_poseRequest;

typedef boost::shared_ptr< ::custom_messages::play_poseRequest > play_poseRequestPtr;
typedef boost::shared_ptr< ::custom_messages::play_poseRequest const> play_poseRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::custom_messages::play_poseRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::custom_messages::play_poseRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace custom_messages

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::custom_messages::play_poseRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::custom_messages::play_poseRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_messages::play_poseRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::custom_messages::play_poseRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_messages::play_poseRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::custom_messages::play_poseRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::custom_messages::play_poseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4c60304461db9a9373cfa924ea61bbd9";
  }

  static const char* value(const ::custom_messages::play_poseRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4c60304461db9a93ULL;
  static const uint64_t static_value2 = 0x73cfa924ea61bbd9ULL;
};

template<class ContainerAllocator>
struct DataType< ::custom_messages::play_poseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "custom_messages/play_poseRequest";
  }

  static const char* value(const ::custom_messages::play_poseRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::custom_messages::play_poseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 play_pose_x\n\
float32 play_pose_y\n\
";
  }

  static const char* value(const ::custom_messages::play_poseRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::custom_messages::play_poseRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.play_pose_x);
      stream.next(m.play_pose_y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct play_poseRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::custom_messages::play_poseRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::custom_messages::play_poseRequest_<ContainerAllocator>& v)
  {
    s << indent << "play_pose_x: ";
    Printer<float>::stream(s, indent + "  ", v.play_pose_x);
    s << indent << "play_pose_y: ";
    Printer<float>::stream(s, indent + "  ", v.play_pose_y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CUSTOM_MESSAGES_MESSAGE_PLAY_POSEREQUEST_H
