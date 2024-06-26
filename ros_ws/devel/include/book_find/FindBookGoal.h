// Generated by gencpp from file book_find/FindBookGoal.msg
// DO NOT EDIT!


#ifndef BOOK_FIND_MESSAGE_FINDBOOKGOAL_H
#define BOOK_FIND_MESSAGE_FINDBOOKGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace book_find
{
template <class ContainerAllocator>
struct FindBookGoal_
{
  typedef FindBookGoal_<ContainerAllocator> Type;

  FindBookGoal_()
    : book_name()
    , book_storage()  {
    }
  FindBookGoal_(const ContainerAllocator& _alloc)
    : book_name(_alloc)
    , book_storage(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _book_name_type;
  _book_name_type book_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _book_storage_type;
  _book_storage_type book_storage;





  typedef boost::shared_ptr< ::book_find::FindBookGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::book_find::FindBookGoal_<ContainerAllocator> const> ConstPtr;

}; // struct FindBookGoal_

typedef ::book_find::FindBookGoal_<std::allocator<void> > FindBookGoal;

typedef boost::shared_ptr< ::book_find::FindBookGoal > FindBookGoalPtr;
typedef boost::shared_ptr< ::book_find::FindBookGoal const> FindBookGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::book_find::FindBookGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::book_find::FindBookGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::book_find::FindBookGoal_<ContainerAllocator1> & lhs, const ::book_find::FindBookGoal_<ContainerAllocator2> & rhs)
{
  return lhs.book_name == rhs.book_name &&
    lhs.book_storage == rhs.book_storage;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::book_find::FindBookGoal_<ContainerAllocator1> & lhs, const ::book_find::FindBookGoal_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace book_find

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::book_find::FindBookGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::book_find::FindBookGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::book_find::FindBookGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::book_find::FindBookGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::book_find::FindBookGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::book_find::FindBookGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::book_find::FindBookGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f8216a57f9626349da1703f23af3e7f3";
  }

  static const char* value(const ::book_find::FindBookGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf8216a57f9626349ULL;
  static const uint64_t static_value2 = 0xda1703f23af3e7f3ULL;
};

template<class ContainerAllocator>
struct DataType< ::book_find::FindBookGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "book_find/FindBookGoal";
  }

  static const char* value(const ::book_find::FindBookGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::book_find::FindBookGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define the goal\n"
"string book_name\n"
"string book_storage\n"
;
  }

  static const char* value(const ::book_find::FindBookGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::book_find::FindBookGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.book_name);
      stream.next(m.book_storage);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FindBookGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::book_find::FindBookGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::book_find::FindBookGoal_<ContainerAllocator>& v)
  {
    s << indent << "book_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.book_name);
    s << indent << "book_storage: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.book_storage);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BOOK_FIND_MESSAGE_FINDBOOKGOAL_H
