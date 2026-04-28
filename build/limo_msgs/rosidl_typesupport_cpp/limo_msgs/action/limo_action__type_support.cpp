// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from limo_msgs:action/LimoAction.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "limo_msgs/action/detail/limo_action__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace limo_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LimoAction_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LimoAction_Goal_type_support_ids_t;

static const _LimoAction_Goal_type_support_ids_t _LimoAction_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LimoAction_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LimoAction_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LimoAction_Goal_type_support_symbol_names_t _LimoAction_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, limo_msgs, action, LimoAction_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, limo_msgs, action, LimoAction_Goal)),
  }
};

typedef struct _LimoAction_Goal_type_support_data_t
{
  void * data[2];
} _LimoAction_Goal_type_support_data_t;

static _LimoAction_Goal_type_support_data_t _LimoAction_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LimoAction_Goal_message_typesupport_map = {
  2,
  "limo_msgs",
  &_LimoAction_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_LimoAction_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_LimoAction_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LimoAction_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LimoAction_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace limo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<limo_msgs::action::LimoAction_Goal>()
{
  return &::limo_msgs::action::rosidl_typesupport_cpp::LimoAction_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, limo_msgs, action, LimoAction_Goal)() {
  return get_message_type_support_handle<limo_msgs::action::LimoAction_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "limo_msgs/action/detail/limo_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace limo_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LimoAction_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LimoAction_Result_type_support_ids_t;

static const _LimoAction_Result_type_support_ids_t _LimoAction_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LimoAction_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LimoAction_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LimoAction_Result_type_support_symbol_names_t _LimoAction_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, limo_msgs, action, LimoAction_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, limo_msgs, action, LimoAction_Result)),
  }
};

typedef struct _LimoAction_Result_type_support_data_t
{
  void * data[2];
} _LimoAction_Result_type_support_data_t;

static _LimoAction_Result_type_support_data_t _LimoAction_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LimoAction_Result_message_typesupport_map = {
  2,
  "limo_msgs",
  &_LimoAction_Result_message_typesupport_ids.typesupport_identifier[0],
  &_LimoAction_Result_message_typesupport_symbol_names.symbol_name[0],
  &_LimoAction_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LimoAction_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LimoAction_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace limo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<limo_msgs::action::LimoAction_Result>()
{
  return &::limo_msgs::action::rosidl_typesupport_cpp::LimoAction_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, limo_msgs, action, LimoAction_Result)() {
  return get_message_type_support_handle<limo_msgs::action::LimoAction_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "limo_msgs/action/detail/limo_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace limo_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LimoAction_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LimoAction_Feedback_type_support_ids_t;

static const _LimoAction_Feedback_type_support_ids_t _LimoAction_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LimoAction_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LimoAction_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LimoAction_Feedback_type_support_symbol_names_t _LimoAction_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, limo_msgs, action, LimoAction_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, limo_msgs, action, LimoAction_Feedback)),
  }
};

typedef struct _LimoAction_Feedback_type_support_data_t
{
  void * data[2];
} _LimoAction_Feedback_type_support_data_t;

static _LimoAction_Feedback_type_support_data_t _LimoAction_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LimoAction_Feedback_message_typesupport_map = {
  2,
  "limo_msgs",
  &_LimoAction_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_LimoAction_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_LimoAction_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LimoAction_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LimoAction_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace limo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<limo_msgs::action::LimoAction_Feedback>()
{
  return &::limo_msgs::action::rosidl_typesupport_cpp::LimoAction_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, limo_msgs, action, LimoAction_Feedback)() {
  return get_message_type_support_handle<limo_msgs::action::LimoAction_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "limo_msgs/action/detail/limo_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace limo_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LimoAction_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LimoAction_SendGoal_Request_type_support_ids_t;

static const _LimoAction_SendGoal_Request_type_support_ids_t _LimoAction_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LimoAction_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LimoAction_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LimoAction_SendGoal_Request_type_support_symbol_names_t _LimoAction_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, limo_msgs, action, LimoAction_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, limo_msgs, action, LimoAction_SendGoal_Request)),
  }
};

typedef struct _LimoAction_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _LimoAction_SendGoal_Request_type_support_data_t;

static _LimoAction_SendGoal_Request_type_support_data_t _LimoAction_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LimoAction_SendGoal_Request_message_typesupport_map = {
  2,
  "limo_msgs",
  &_LimoAction_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_LimoAction_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_LimoAction_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LimoAction_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LimoAction_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace limo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<limo_msgs::action::LimoAction_SendGoal_Request>()
{
  return &::limo_msgs::action::rosidl_typesupport_cpp::LimoAction_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, limo_msgs, action, LimoAction_SendGoal_Request)() {
  return get_message_type_support_handle<limo_msgs::action::LimoAction_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "limo_msgs/action/detail/limo_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace limo_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LimoAction_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LimoAction_SendGoal_Response_type_support_ids_t;

static const _LimoAction_SendGoal_Response_type_support_ids_t _LimoAction_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LimoAction_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LimoAction_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LimoAction_SendGoal_Response_type_support_symbol_names_t _LimoAction_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, limo_msgs, action, LimoAction_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, limo_msgs, action, LimoAction_SendGoal_Response)),
  }
};

typedef struct _LimoAction_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _LimoAction_SendGoal_Response_type_support_data_t;

static _LimoAction_SendGoal_Response_type_support_data_t _LimoAction_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LimoAction_SendGoal_Response_message_typesupport_map = {
  2,
  "limo_msgs",
  &_LimoAction_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_LimoAction_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_LimoAction_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LimoAction_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LimoAction_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace limo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<limo_msgs::action::LimoAction_SendGoal_Response>()
{
  return &::limo_msgs::action::rosidl_typesupport_cpp::LimoAction_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, limo_msgs, action, LimoAction_SendGoal_Response)() {
  return get_message_type_support_handle<limo_msgs::action::LimoAction_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "limo_msgs/action/detail/limo_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace limo_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LimoAction_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LimoAction_SendGoal_type_support_ids_t;

static const _LimoAction_SendGoal_type_support_ids_t _LimoAction_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LimoAction_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LimoAction_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LimoAction_SendGoal_type_support_symbol_names_t _LimoAction_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, limo_msgs, action, LimoAction_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, limo_msgs, action, LimoAction_SendGoal)),
  }
};

typedef struct _LimoAction_SendGoal_type_support_data_t
{
  void * data[2];
} _LimoAction_SendGoal_type_support_data_t;

static _LimoAction_SendGoal_type_support_data_t _LimoAction_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LimoAction_SendGoal_service_typesupport_map = {
  2,
  "limo_msgs",
  &_LimoAction_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_LimoAction_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_LimoAction_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t LimoAction_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LimoAction_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace limo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<limo_msgs::action::LimoAction_SendGoal>()
{
  return &::limo_msgs::action::rosidl_typesupport_cpp::LimoAction_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, limo_msgs, action, LimoAction_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<limo_msgs::action::LimoAction_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "limo_msgs/action/detail/limo_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace limo_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LimoAction_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LimoAction_GetResult_Request_type_support_ids_t;

static const _LimoAction_GetResult_Request_type_support_ids_t _LimoAction_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LimoAction_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LimoAction_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LimoAction_GetResult_Request_type_support_symbol_names_t _LimoAction_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, limo_msgs, action, LimoAction_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, limo_msgs, action, LimoAction_GetResult_Request)),
  }
};

typedef struct _LimoAction_GetResult_Request_type_support_data_t
{
  void * data[2];
} _LimoAction_GetResult_Request_type_support_data_t;

static _LimoAction_GetResult_Request_type_support_data_t _LimoAction_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LimoAction_GetResult_Request_message_typesupport_map = {
  2,
  "limo_msgs",
  &_LimoAction_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_LimoAction_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_LimoAction_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LimoAction_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LimoAction_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace limo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<limo_msgs::action::LimoAction_GetResult_Request>()
{
  return &::limo_msgs::action::rosidl_typesupport_cpp::LimoAction_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, limo_msgs, action, LimoAction_GetResult_Request)() {
  return get_message_type_support_handle<limo_msgs::action::LimoAction_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "limo_msgs/action/detail/limo_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace limo_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LimoAction_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LimoAction_GetResult_Response_type_support_ids_t;

static const _LimoAction_GetResult_Response_type_support_ids_t _LimoAction_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LimoAction_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LimoAction_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LimoAction_GetResult_Response_type_support_symbol_names_t _LimoAction_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, limo_msgs, action, LimoAction_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, limo_msgs, action, LimoAction_GetResult_Response)),
  }
};

typedef struct _LimoAction_GetResult_Response_type_support_data_t
{
  void * data[2];
} _LimoAction_GetResult_Response_type_support_data_t;

static _LimoAction_GetResult_Response_type_support_data_t _LimoAction_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LimoAction_GetResult_Response_message_typesupport_map = {
  2,
  "limo_msgs",
  &_LimoAction_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_LimoAction_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_LimoAction_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LimoAction_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LimoAction_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace limo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<limo_msgs::action::LimoAction_GetResult_Response>()
{
  return &::limo_msgs::action::rosidl_typesupport_cpp::LimoAction_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, limo_msgs, action, LimoAction_GetResult_Response)() {
  return get_message_type_support_handle<limo_msgs::action::LimoAction_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "limo_msgs/action/detail/limo_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace limo_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LimoAction_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LimoAction_GetResult_type_support_ids_t;

static const _LimoAction_GetResult_type_support_ids_t _LimoAction_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LimoAction_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LimoAction_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LimoAction_GetResult_type_support_symbol_names_t _LimoAction_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, limo_msgs, action, LimoAction_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, limo_msgs, action, LimoAction_GetResult)),
  }
};

typedef struct _LimoAction_GetResult_type_support_data_t
{
  void * data[2];
} _LimoAction_GetResult_type_support_data_t;

static _LimoAction_GetResult_type_support_data_t _LimoAction_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LimoAction_GetResult_service_typesupport_map = {
  2,
  "limo_msgs",
  &_LimoAction_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_LimoAction_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_LimoAction_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t LimoAction_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LimoAction_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace limo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<limo_msgs::action::LimoAction_GetResult>()
{
  return &::limo_msgs::action::rosidl_typesupport_cpp::LimoAction_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, limo_msgs, action, LimoAction_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<limo_msgs::action::LimoAction_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "limo_msgs/action/detail/limo_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace limo_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _LimoAction_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LimoAction_FeedbackMessage_type_support_ids_t;

static const _LimoAction_FeedbackMessage_type_support_ids_t _LimoAction_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _LimoAction_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LimoAction_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LimoAction_FeedbackMessage_type_support_symbol_names_t _LimoAction_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, limo_msgs, action, LimoAction_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, limo_msgs, action, LimoAction_FeedbackMessage)),
  }
};

typedef struct _LimoAction_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _LimoAction_FeedbackMessage_type_support_data_t;

static _LimoAction_FeedbackMessage_type_support_data_t _LimoAction_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LimoAction_FeedbackMessage_message_typesupport_map = {
  2,
  "limo_msgs",
  &_LimoAction_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_LimoAction_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_LimoAction_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LimoAction_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LimoAction_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace limo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<limo_msgs::action::LimoAction_FeedbackMessage>()
{
  return &::limo_msgs::action::rosidl_typesupport_cpp::LimoAction_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, limo_msgs, action, LimoAction_FeedbackMessage)() {
  return get_message_type_support_handle<limo_msgs::action::LimoAction_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "limo_msgs/action/detail/limo_action__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace limo_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t LimoAction_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace limo_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<limo_msgs::action::LimoAction>()
{
  using ::limo_msgs::action::rosidl_typesupport_cpp::LimoAction_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  LimoAction_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::limo_msgs::action::LimoAction::Impl::SendGoalService>();
  LimoAction_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::limo_msgs::action::LimoAction::Impl::GetResultService>();
  LimoAction_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::limo_msgs::action::LimoAction::Impl::CancelGoalService>();
  LimoAction_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::limo_msgs::action::LimoAction::Impl::FeedbackMessage>();
  LimoAction_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::limo_msgs::action::LimoAction::Impl::GoalStatusMessage>();
  return &LimoAction_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, limo_msgs, action, LimoAction)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<limo_msgs::action::LimoAction>();
}

#ifdef __cplusplus
}
#endif
