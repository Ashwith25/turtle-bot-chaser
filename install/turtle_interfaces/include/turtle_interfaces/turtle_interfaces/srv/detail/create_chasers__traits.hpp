// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:srv/CreateChasers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtle_interfaces/srv/create_chasers.hpp"


#ifndef TURTLE_INTERFACES__SRV__DETAIL__CREATE_CHASERS__TRAITS_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__CREATE_CHASERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "turtle_interfaces/srv/detail/create_chasers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace turtle_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CreateChasers_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CreateChasers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CreateChasers_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_interfaces::srv::CreateChasers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_interfaces::srv::CreateChasers_Request & msg)
{
  return turtle_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_interfaces::srv::CreateChasers_Request>()
{
  return "turtle_interfaces::srv::CreateChasers_Request";
}

template<>
inline const char * name<turtle_interfaces::srv::CreateChasers_Request>()
{
  return "turtle_interfaces/srv/CreateChasers_Request";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::CreateChasers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_interfaces::srv::CreateChasers_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_interfaces::srv::CreateChasers_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace turtle_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CreateChasers_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: turtle_names
  {
    if (msg.turtle_names.size() == 0) {
      out << "turtle_names: []";
    } else {
      out << "turtle_names: [";
      size_t pending_items = msg.turtle_names.size();
      for (auto item : msg.turtle_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CreateChasers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: turtle_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.turtle_names.size() == 0) {
      out << "turtle_names: []\n";
    } else {
      out << "turtle_names:\n";
      for (auto item : msg.turtle_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CreateChasers_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_interfaces::srv::CreateChasers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_interfaces::srv::CreateChasers_Response & msg)
{
  return turtle_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_interfaces::srv::CreateChasers_Response>()
{
  return "turtle_interfaces::srv::CreateChasers_Response";
}

template<>
inline const char * name<turtle_interfaces::srv::CreateChasers_Response>()
{
  return "turtle_interfaces/srv/CreateChasers_Response";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::CreateChasers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_interfaces::srv::CreateChasers_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_interfaces::srv::CreateChasers_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace turtle_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CreateChasers_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CreateChasers_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CreateChasers_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace turtle_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use turtle_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const turtle_interfaces::srv::CreateChasers_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  turtle_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use turtle_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const turtle_interfaces::srv::CreateChasers_Event & msg)
{
  return turtle_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<turtle_interfaces::srv::CreateChasers_Event>()
{
  return "turtle_interfaces::srv::CreateChasers_Event";
}

template<>
inline const char * name<turtle_interfaces::srv::CreateChasers_Event>()
{
  return "turtle_interfaces/srv/CreateChasers_Event";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::CreateChasers_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_interfaces::srv::CreateChasers_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<turtle_interfaces::srv::CreateChasers_Request>::value && has_bounded_size<turtle_interfaces::srv::CreateChasers_Response>::value> {};

template<>
struct is_message<turtle_interfaces::srv::CreateChasers_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::srv::CreateChasers>()
{
  return "turtle_interfaces::srv::CreateChasers";
}

template<>
inline const char * name<turtle_interfaces::srv::CreateChasers>()
{
  return "turtle_interfaces/srv/CreateChasers";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::CreateChasers>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_interfaces::srv::CreateChasers_Request>::value &&
    has_fixed_size<turtle_interfaces::srv::CreateChasers_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_interfaces::srv::CreateChasers>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_interfaces::srv::CreateChasers_Request>::value &&
    has_bounded_size<turtle_interfaces::srv::CreateChasers_Response>::value
  >
{
};

template<>
struct is_service<turtle_interfaces::srv::CreateChasers>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_interfaces::srv::CreateChasers_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_interfaces::srv::CreateChasers_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__SRV__DETAIL__CREATE_CHASERS__TRAITS_HPP_
