// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/CreateChasers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "interfaces/srv/create_chasers.hpp"


#ifndef INTERFACES__SRV__DETAIL__CREATE_CHASERS__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__CREATE_CHASERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/create_chasers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_CreateChasers_Request_count
{
public:
  Init_CreateChasers_Request_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::CreateChasers_Request count(::interfaces::srv::CreateChasers_Request::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::CreateChasers_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::CreateChasers_Request>()
{
  return interfaces::srv::builder::Init_CreateChasers_Request_count();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_CreateChasers_Response_turtle_names
{
public:
  Init_CreateChasers_Response_turtle_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::CreateChasers_Response turtle_names(::interfaces::srv::CreateChasers_Response::_turtle_names_type arg)
  {
    msg_.turtle_names = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::CreateChasers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::CreateChasers_Response>()
{
  return interfaces::srv::builder::Init_CreateChasers_Response_turtle_names();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_CreateChasers_Event_response
{
public:
  explicit Init_CreateChasers_Event_response(::interfaces::srv::CreateChasers_Event & msg)
  : msg_(msg)
  {}
  ::interfaces::srv::CreateChasers_Event response(::interfaces::srv::CreateChasers_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::CreateChasers_Event msg_;
};

class Init_CreateChasers_Event_request
{
public:
  explicit Init_CreateChasers_Event_request(::interfaces::srv::CreateChasers_Event & msg)
  : msg_(msg)
  {}
  Init_CreateChasers_Event_response request(::interfaces::srv::CreateChasers_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_CreateChasers_Event_response(msg_);
  }

private:
  ::interfaces::srv::CreateChasers_Event msg_;
};

class Init_CreateChasers_Event_info
{
public:
  Init_CreateChasers_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CreateChasers_Event_request info(::interfaces::srv::CreateChasers_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_CreateChasers_Event_request(msg_);
  }

private:
  ::interfaces::srv::CreateChasers_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::CreateChasers_Event>()
{
  return interfaces::srv::builder::Init_CreateChasers_Event_info();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__CREATE_CHASERS__BUILDER_HPP_
