// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from limo_msgs:action/LimoAction.idl
// generated code does not contain a copyright notice

#ifndef LIMO_MSGS__ACTION__DETAIL__LIMO_ACTION__FUNCTIONS_H_
#define LIMO_MSGS__ACTION__DETAIL__LIMO_ACTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "limo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "limo_msgs/action/detail/limo_action__struct.h"

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_Goal
 * )) before or use
 * limo_msgs__action__LimoAction_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Goal__init(limo_msgs__action__LimoAction_Goal * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Goal__fini(limo_msgs__action__LimoAction_Goal * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_Goal *
limo_msgs__action__LimoAction_Goal__create();

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Goal__destroy(limo_msgs__action__LimoAction_Goal * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Goal__are_equal(const limo_msgs__action__LimoAction_Goal * lhs, const limo_msgs__action__LimoAction_Goal * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Goal__copy(
  const limo_msgs__action__LimoAction_Goal * input,
  limo_msgs__action__LimoAction_Goal * output);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Goal__Sequence__init(limo_msgs__action__LimoAction_Goal__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Goal__Sequence__fini(limo_msgs__action__LimoAction_Goal__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_Goal__Sequence *
limo_msgs__action__LimoAction_Goal__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Goal__Sequence__destroy(limo_msgs__action__LimoAction_Goal__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Goal__Sequence__are_equal(const limo_msgs__action__LimoAction_Goal__Sequence * lhs, const limo_msgs__action__LimoAction_Goal__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Goal__Sequence__copy(
  const limo_msgs__action__LimoAction_Goal__Sequence * input,
  limo_msgs__action__LimoAction_Goal__Sequence * output);

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_Result
 * )) before or use
 * limo_msgs__action__LimoAction_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Result__init(limo_msgs__action__LimoAction_Result * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Result__fini(limo_msgs__action__LimoAction_Result * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_Result *
limo_msgs__action__LimoAction_Result__create();

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Result__destroy(limo_msgs__action__LimoAction_Result * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Result__are_equal(const limo_msgs__action__LimoAction_Result * lhs, const limo_msgs__action__LimoAction_Result * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Result__copy(
  const limo_msgs__action__LimoAction_Result * input,
  limo_msgs__action__LimoAction_Result * output);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Result__Sequence__init(limo_msgs__action__LimoAction_Result__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Result__Sequence__fini(limo_msgs__action__LimoAction_Result__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_Result__Sequence *
limo_msgs__action__LimoAction_Result__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Result__Sequence__destroy(limo_msgs__action__LimoAction_Result__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Result__Sequence__are_equal(const limo_msgs__action__LimoAction_Result__Sequence * lhs, const limo_msgs__action__LimoAction_Result__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Result__Sequence__copy(
  const limo_msgs__action__LimoAction_Result__Sequence * input,
  limo_msgs__action__LimoAction_Result__Sequence * output);

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_Feedback
 * )) before or use
 * limo_msgs__action__LimoAction_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Feedback__init(limo_msgs__action__LimoAction_Feedback * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Feedback__fini(limo_msgs__action__LimoAction_Feedback * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_Feedback *
limo_msgs__action__LimoAction_Feedback__create();

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Feedback__destroy(limo_msgs__action__LimoAction_Feedback * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Feedback__are_equal(const limo_msgs__action__LimoAction_Feedback * lhs, const limo_msgs__action__LimoAction_Feedback * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Feedback__copy(
  const limo_msgs__action__LimoAction_Feedback * input,
  limo_msgs__action__LimoAction_Feedback * output);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Feedback__Sequence__init(limo_msgs__action__LimoAction_Feedback__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Feedback__Sequence__fini(limo_msgs__action__LimoAction_Feedback__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_Feedback__Sequence *
limo_msgs__action__LimoAction_Feedback__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_Feedback__Sequence__destroy(limo_msgs__action__LimoAction_Feedback__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Feedback__Sequence__are_equal(const limo_msgs__action__LimoAction_Feedback__Sequence * lhs, const limo_msgs__action__LimoAction_Feedback__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_Feedback__Sequence__copy(
  const limo_msgs__action__LimoAction_Feedback__Sequence * input,
  limo_msgs__action__LimoAction_Feedback__Sequence * output);

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_SendGoal_Request
 * )) before or use
 * limo_msgs__action__LimoAction_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Request__init(limo_msgs__action__LimoAction_SendGoal_Request * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Request__fini(limo_msgs__action__LimoAction_SendGoal_Request * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_SendGoal_Request *
limo_msgs__action__LimoAction_SendGoal_Request__create();

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Request__destroy(limo_msgs__action__LimoAction_SendGoal_Request * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Request__are_equal(const limo_msgs__action__LimoAction_SendGoal_Request * lhs, const limo_msgs__action__LimoAction_SendGoal_Request * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Request__copy(
  const limo_msgs__action__LimoAction_SendGoal_Request * input,
  limo_msgs__action__LimoAction_SendGoal_Request * output);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__init(limo_msgs__action__LimoAction_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__fini(limo_msgs__action__LimoAction_SendGoal_Request__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_SendGoal_Request__Sequence *
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__destroy(limo_msgs__action__LimoAction_SendGoal_Request__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__are_equal(const limo_msgs__action__LimoAction_SendGoal_Request__Sequence * lhs, const limo_msgs__action__LimoAction_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__copy(
  const limo_msgs__action__LimoAction_SendGoal_Request__Sequence * input,
  limo_msgs__action__LimoAction_SendGoal_Request__Sequence * output);

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_SendGoal_Response
 * )) before or use
 * limo_msgs__action__LimoAction_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Response__init(limo_msgs__action__LimoAction_SendGoal_Response * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Response__fini(limo_msgs__action__LimoAction_SendGoal_Response * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_SendGoal_Response *
limo_msgs__action__LimoAction_SendGoal_Response__create();

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Response__destroy(limo_msgs__action__LimoAction_SendGoal_Response * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Response__are_equal(const limo_msgs__action__LimoAction_SendGoal_Response * lhs, const limo_msgs__action__LimoAction_SendGoal_Response * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Response__copy(
  const limo_msgs__action__LimoAction_SendGoal_Response * input,
  limo_msgs__action__LimoAction_SendGoal_Response * output);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__init(limo_msgs__action__LimoAction_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__fini(limo_msgs__action__LimoAction_SendGoal_Response__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_SendGoal_Response__Sequence *
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__destroy(limo_msgs__action__LimoAction_SendGoal_Response__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__are_equal(const limo_msgs__action__LimoAction_SendGoal_Response__Sequence * lhs, const limo_msgs__action__LimoAction_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__copy(
  const limo_msgs__action__LimoAction_SendGoal_Response__Sequence * input,
  limo_msgs__action__LimoAction_SendGoal_Response__Sequence * output);

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_GetResult_Request
 * )) before or use
 * limo_msgs__action__LimoAction_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Request__init(limo_msgs__action__LimoAction_GetResult_Request * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Request__fini(limo_msgs__action__LimoAction_GetResult_Request * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_GetResult_Request *
limo_msgs__action__LimoAction_GetResult_Request__create();

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Request__destroy(limo_msgs__action__LimoAction_GetResult_Request * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Request__are_equal(const limo_msgs__action__LimoAction_GetResult_Request * lhs, const limo_msgs__action__LimoAction_GetResult_Request * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Request__copy(
  const limo_msgs__action__LimoAction_GetResult_Request * input,
  limo_msgs__action__LimoAction_GetResult_Request * output);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Request__Sequence__init(limo_msgs__action__LimoAction_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Request__Sequence__fini(limo_msgs__action__LimoAction_GetResult_Request__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_GetResult_Request__Sequence *
limo_msgs__action__LimoAction_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Request__Sequence__destroy(limo_msgs__action__LimoAction_GetResult_Request__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Request__Sequence__are_equal(const limo_msgs__action__LimoAction_GetResult_Request__Sequence * lhs, const limo_msgs__action__LimoAction_GetResult_Request__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Request__Sequence__copy(
  const limo_msgs__action__LimoAction_GetResult_Request__Sequence * input,
  limo_msgs__action__LimoAction_GetResult_Request__Sequence * output);

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_GetResult_Response
 * )) before or use
 * limo_msgs__action__LimoAction_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Response__init(limo_msgs__action__LimoAction_GetResult_Response * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Response__fini(limo_msgs__action__LimoAction_GetResult_Response * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_GetResult_Response *
limo_msgs__action__LimoAction_GetResult_Response__create();

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Response__destroy(limo_msgs__action__LimoAction_GetResult_Response * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Response__are_equal(const limo_msgs__action__LimoAction_GetResult_Response * lhs, const limo_msgs__action__LimoAction_GetResult_Response * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Response__copy(
  const limo_msgs__action__LimoAction_GetResult_Response * input,
  limo_msgs__action__LimoAction_GetResult_Response * output);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Response__Sequence__init(limo_msgs__action__LimoAction_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Response__Sequence__fini(limo_msgs__action__LimoAction_GetResult_Response__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_GetResult_Response__Sequence *
limo_msgs__action__LimoAction_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_GetResult_Response__Sequence__destroy(limo_msgs__action__LimoAction_GetResult_Response__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Response__Sequence__are_equal(const limo_msgs__action__LimoAction_GetResult_Response__Sequence * lhs, const limo_msgs__action__LimoAction_GetResult_Response__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_GetResult_Response__Sequence__copy(
  const limo_msgs__action__LimoAction_GetResult_Response__Sequence * input,
  limo_msgs__action__LimoAction_GetResult_Response__Sequence * output);

/// Initialize action/LimoAction message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * limo_msgs__action__LimoAction_FeedbackMessage
 * )) before or use
 * limo_msgs__action__LimoAction_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_FeedbackMessage__init(limo_msgs__action__LimoAction_FeedbackMessage * msg);

/// Finalize action/LimoAction message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_FeedbackMessage__fini(limo_msgs__action__LimoAction_FeedbackMessage * msg);

/// Create action/LimoAction message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * limo_msgs__action__LimoAction_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_FeedbackMessage *
limo_msgs__action__LimoAction_FeedbackMessage__create();

/// Destroy action/LimoAction message.
/**
 * It calls
 * limo_msgs__action__LimoAction_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_FeedbackMessage__destroy(limo_msgs__action__LimoAction_FeedbackMessage * msg);

/// Check for action/LimoAction message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_FeedbackMessage__are_equal(const limo_msgs__action__LimoAction_FeedbackMessage * lhs, const limo_msgs__action__LimoAction_FeedbackMessage * rhs);

/// Copy a action/LimoAction message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_FeedbackMessage__copy(
  const limo_msgs__action__LimoAction_FeedbackMessage * input,
  limo_msgs__action__LimoAction_FeedbackMessage * output);

/// Initialize array of action/LimoAction messages.
/**
 * It allocates the memory for the number of elements and calls
 * limo_msgs__action__LimoAction_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__init(limo_msgs__action__LimoAction_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__fini(limo_msgs__action__LimoAction_FeedbackMessage__Sequence * array);

/// Create array of action/LimoAction messages.
/**
 * It allocates the memory for the array and calls
 * limo_msgs__action__LimoAction_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
limo_msgs__action__LimoAction_FeedbackMessage__Sequence *
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/LimoAction messages.
/**
 * It calls
 * limo_msgs__action__LimoAction_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
void
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__destroy(limo_msgs__action__LimoAction_FeedbackMessage__Sequence * array);

/// Check for action/LimoAction message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__are_equal(const limo_msgs__action__LimoAction_FeedbackMessage__Sequence * lhs, const limo_msgs__action__LimoAction_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/LimoAction messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_limo_msgs
bool
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__copy(
  const limo_msgs__action__LimoAction_FeedbackMessage__Sequence * input,
  limo_msgs__action__LimoAction_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LIMO_MSGS__ACTION__DETAIL__LIMO_ACTION__FUNCTIONS_H_
