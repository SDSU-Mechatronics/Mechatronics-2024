// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from scion_types:srv/SendFrame.idl
// generated code does not contain a copyright notice
#include "scion_types/srv/detail/send_frame__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "scion_types/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "scion_types/srv/detail/send_frame__struct.h"
#include "scion_types/srv/detail/send_frame__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SendFrame_Request__ros_msg_type = scion_types__srv__SendFrame_Request;

static bool _SendFrame_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SendFrame_Request__ros_msg_type * ros_message = static_cast<const _SendFrame_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: can_id
  {
    cdr << ros_message->can_id;
  }

  // Field name: can_dlc
  {
    cdr << ros_message->can_dlc;
  }

  // Field name: can_data
  {
    size_t size = 8;
    auto array_ptr = ros_message->can_data;
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SendFrame_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SendFrame_Request__ros_msg_type * ros_message = static_cast<_SendFrame_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: can_id
  {
    cdr >> ros_message->can_id;
  }

  // Field name: can_dlc
  {
    cdr >> ros_message->can_dlc;
  }

  // Field name: can_data
  {
    size_t size = 8;
    auto array_ptr = ros_message->can_data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_scion_types
size_t get_serialized_size_scion_types__srv__SendFrame_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SendFrame_Request__ros_msg_type * ros_message = static_cast<const _SendFrame_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name can_id
  {
    size_t item_size = sizeof(ros_message->can_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_dlc
  {
    size_t item_size = sizeof(ros_message->can_dlc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_data
  {
    size_t array_size = 8;
    auto array_ptr = ros_message->can_data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SendFrame_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_scion_types__srv__SendFrame_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_scion_types
size_t max_serialized_size_scion_types__srv__SendFrame_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: can_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: can_dlc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_data
  {
    size_t array_size = 8;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SendFrame_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_scion_types__srv__SendFrame_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SendFrame_Request = {
  "scion_types::srv",
  "SendFrame_Request",
  _SendFrame_Request__cdr_serialize,
  _SendFrame_Request__cdr_deserialize,
  _SendFrame_Request__get_serialized_size,
  _SendFrame_Request__max_serialized_size
};

static rosidl_message_type_support_t _SendFrame_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SendFrame_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scion_types, srv, SendFrame_Request)() {
  return &_SendFrame_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "scion_types/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "scion_types/srv/detail/send_frame__struct.h"
// already included above
// #include "scion_types/srv/detail/send_frame__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SendFrame_Response__ros_msg_type = scion_types__srv__SendFrame_Response;

static bool _SendFrame_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SendFrame_Response__ros_msg_type * ros_message = static_cast<const _SendFrame_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  return true;
}

static bool _SendFrame_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SendFrame_Response__ros_msg_type * ros_message = static_cast<_SendFrame_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_scion_types
size_t get_serialized_size_scion_types__srv__SendFrame_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SendFrame_Response__ros_msg_type * ros_message = static_cast<const _SendFrame_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SendFrame_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_scion_types__srv__SendFrame_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_scion_types
size_t max_serialized_size_scion_types__srv__SendFrame_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SendFrame_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_scion_types__srv__SendFrame_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SendFrame_Response = {
  "scion_types::srv",
  "SendFrame_Response",
  _SendFrame_Response__cdr_serialize,
  _SendFrame_Response__cdr_deserialize,
  _SendFrame_Response__get_serialized_size,
  _SendFrame_Response__max_serialized_size
};

static rosidl_message_type_support_t _SendFrame_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SendFrame_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scion_types, srv, SendFrame_Response)() {
  return &_SendFrame_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "scion_types/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "scion_types/srv/send_frame.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SendFrame__callbacks = {
  "scion_types::srv",
  "SendFrame",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scion_types, srv, SendFrame_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scion_types, srv, SendFrame_Response)(),
};

static rosidl_service_type_support_t SendFrame__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SendFrame__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scion_types, srv, SendFrame)() {
  return &SendFrame__handle;
}

#if defined(__cplusplus)
}
#endif
