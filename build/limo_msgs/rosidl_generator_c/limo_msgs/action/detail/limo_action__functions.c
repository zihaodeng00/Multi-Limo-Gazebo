// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from limo_msgs:action/LimoAction.idl
// generated code does not contain a copyright notice
#include "limo_msgs/action/detail/limo_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
limo_msgs__action__LimoAction_Goal__init(limo_msgs__action__LimoAction_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
limo_msgs__action__LimoAction_Goal__fini(limo_msgs__action__LimoAction_Goal * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
limo_msgs__action__LimoAction_Goal__are_equal(const limo_msgs__action__LimoAction_Goal * lhs, const limo_msgs__action__LimoAction_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
limo_msgs__action__LimoAction_Goal__copy(
  const limo_msgs__action__LimoAction_Goal * input,
  limo_msgs__action__LimoAction_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

limo_msgs__action__LimoAction_Goal *
limo_msgs__action__LimoAction_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_Goal * msg = (limo_msgs__action__LimoAction_Goal *)allocator.allocate(sizeof(limo_msgs__action__LimoAction_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limo_msgs__action__LimoAction_Goal));
  bool success = limo_msgs__action__LimoAction_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limo_msgs__action__LimoAction_Goal__destroy(limo_msgs__action__LimoAction_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limo_msgs__action__LimoAction_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limo_msgs__action__LimoAction_Goal__Sequence__init(limo_msgs__action__LimoAction_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_Goal * data = NULL;

  if (size) {
    data = (limo_msgs__action__LimoAction_Goal *)allocator.zero_allocate(size, sizeof(limo_msgs__action__LimoAction_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limo_msgs__action__LimoAction_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limo_msgs__action__LimoAction_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
limo_msgs__action__LimoAction_Goal__Sequence__fini(limo_msgs__action__LimoAction_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      limo_msgs__action__LimoAction_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

limo_msgs__action__LimoAction_Goal__Sequence *
limo_msgs__action__LimoAction_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_Goal__Sequence * array = (limo_msgs__action__LimoAction_Goal__Sequence *)allocator.allocate(sizeof(limo_msgs__action__LimoAction_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limo_msgs__action__LimoAction_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limo_msgs__action__LimoAction_Goal__Sequence__destroy(limo_msgs__action__LimoAction_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limo_msgs__action__LimoAction_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limo_msgs__action__LimoAction_Goal__Sequence__are_equal(const limo_msgs__action__LimoAction_Goal__Sequence * lhs, const limo_msgs__action__LimoAction_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limo_msgs__action__LimoAction_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limo_msgs__action__LimoAction_Goal__Sequence__copy(
  const limo_msgs__action__LimoAction_Goal__Sequence * input,
  limo_msgs__action__LimoAction_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(limo_msgs__action__LimoAction_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    limo_msgs__action__LimoAction_Goal * data =
      (limo_msgs__action__LimoAction_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limo_msgs__action__LimoAction_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          limo_msgs__action__LimoAction_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!limo_msgs__action__LimoAction_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
limo_msgs__action__LimoAction_Result__init(limo_msgs__action__LimoAction_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
limo_msgs__action__LimoAction_Result__fini(limo_msgs__action__LimoAction_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
limo_msgs__action__LimoAction_Result__are_equal(const limo_msgs__action__LimoAction_Result * lhs, const limo_msgs__action__LimoAction_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
limo_msgs__action__LimoAction_Result__copy(
  const limo_msgs__action__LimoAction_Result * input,
  limo_msgs__action__LimoAction_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

limo_msgs__action__LimoAction_Result *
limo_msgs__action__LimoAction_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_Result * msg = (limo_msgs__action__LimoAction_Result *)allocator.allocate(sizeof(limo_msgs__action__LimoAction_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limo_msgs__action__LimoAction_Result));
  bool success = limo_msgs__action__LimoAction_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limo_msgs__action__LimoAction_Result__destroy(limo_msgs__action__LimoAction_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limo_msgs__action__LimoAction_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limo_msgs__action__LimoAction_Result__Sequence__init(limo_msgs__action__LimoAction_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_Result * data = NULL;

  if (size) {
    data = (limo_msgs__action__LimoAction_Result *)allocator.zero_allocate(size, sizeof(limo_msgs__action__LimoAction_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limo_msgs__action__LimoAction_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limo_msgs__action__LimoAction_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
limo_msgs__action__LimoAction_Result__Sequence__fini(limo_msgs__action__LimoAction_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      limo_msgs__action__LimoAction_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

limo_msgs__action__LimoAction_Result__Sequence *
limo_msgs__action__LimoAction_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_Result__Sequence * array = (limo_msgs__action__LimoAction_Result__Sequence *)allocator.allocate(sizeof(limo_msgs__action__LimoAction_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limo_msgs__action__LimoAction_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limo_msgs__action__LimoAction_Result__Sequence__destroy(limo_msgs__action__LimoAction_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limo_msgs__action__LimoAction_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limo_msgs__action__LimoAction_Result__Sequence__are_equal(const limo_msgs__action__LimoAction_Result__Sequence * lhs, const limo_msgs__action__LimoAction_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limo_msgs__action__LimoAction_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limo_msgs__action__LimoAction_Result__Sequence__copy(
  const limo_msgs__action__LimoAction_Result__Sequence * input,
  limo_msgs__action__LimoAction_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(limo_msgs__action__LimoAction_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    limo_msgs__action__LimoAction_Result * data =
      (limo_msgs__action__LimoAction_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limo_msgs__action__LimoAction_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          limo_msgs__action__LimoAction_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!limo_msgs__action__LimoAction_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
limo_msgs__action__LimoAction_Feedback__init(limo_msgs__action__LimoAction_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
limo_msgs__action__LimoAction_Feedback__fini(limo_msgs__action__LimoAction_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
limo_msgs__action__LimoAction_Feedback__are_equal(const limo_msgs__action__LimoAction_Feedback * lhs, const limo_msgs__action__LimoAction_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
limo_msgs__action__LimoAction_Feedback__copy(
  const limo_msgs__action__LimoAction_Feedback * input,
  limo_msgs__action__LimoAction_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

limo_msgs__action__LimoAction_Feedback *
limo_msgs__action__LimoAction_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_Feedback * msg = (limo_msgs__action__LimoAction_Feedback *)allocator.allocate(sizeof(limo_msgs__action__LimoAction_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limo_msgs__action__LimoAction_Feedback));
  bool success = limo_msgs__action__LimoAction_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limo_msgs__action__LimoAction_Feedback__destroy(limo_msgs__action__LimoAction_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limo_msgs__action__LimoAction_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limo_msgs__action__LimoAction_Feedback__Sequence__init(limo_msgs__action__LimoAction_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_Feedback * data = NULL;

  if (size) {
    data = (limo_msgs__action__LimoAction_Feedback *)allocator.zero_allocate(size, sizeof(limo_msgs__action__LimoAction_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limo_msgs__action__LimoAction_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limo_msgs__action__LimoAction_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
limo_msgs__action__LimoAction_Feedback__Sequence__fini(limo_msgs__action__LimoAction_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      limo_msgs__action__LimoAction_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

limo_msgs__action__LimoAction_Feedback__Sequence *
limo_msgs__action__LimoAction_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_Feedback__Sequence * array = (limo_msgs__action__LimoAction_Feedback__Sequence *)allocator.allocate(sizeof(limo_msgs__action__LimoAction_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limo_msgs__action__LimoAction_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limo_msgs__action__LimoAction_Feedback__Sequence__destroy(limo_msgs__action__LimoAction_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limo_msgs__action__LimoAction_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limo_msgs__action__LimoAction_Feedback__Sequence__are_equal(const limo_msgs__action__LimoAction_Feedback__Sequence * lhs, const limo_msgs__action__LimoAction_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limo_msgs__action__LimoAction_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limo_msgs__action__LimoAction_Feedback__Sequence__copy(
  const limo_msgs__action__LimoAction_Feedback__Sequence * input,
  limo_msgs__action__LimoAction_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(limo_msgs__action__LimoAction_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    limo_msgs__action__LimoAction_Feedback * data =
      (limo_msgs__action__LimoAction_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limo_msgs__action__LimoAction_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          limo_msgs__action__LimoAction_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!limo_msgs__action__LimoAction_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "limo_msgs/action/detail/limo_action__functions.h"

bool
limo_msgs__action__LimoAction_SendGoal_Request__init(limo_msgs__action__LimoAction_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    limo_msgs__action__LimoAction_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!limo_msgs__action__LimoAction_Goal__init(&msg->goal)) {
    limo_msgs__action__LimoAction_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
limo_msgs__action__LimoAction_SendGoal_Request__fini(limo_msgs__action__LimoAction_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  limo_msgs__action__LimoAction_Goal__fini(&msg->goal);
}

bool
limo_msgs__action__LimoAction_SendGoal_Request__are_equal(const limo_msgs__action__LimoAction_SendGoal_Request * lhs, const limo_msgs__action__LimoAction_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!limo_msgs__action__LimoAction_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
limo_msgs__action__LimoAction_SendGoal_Request__copy(
  const limo_msgs__action__LimoAction_SendGoal_Request * input,
  limo_msgs__action__LimoAction_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!limo_msgs__action__LimoAction_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

limo_msgs__action__LimoAction_SendGoal_Request *
limo_msgs__action__LimoAction_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_SendGoal_Request * msg = (limo_msgs__action__LimoAction_SendGoal_Request *)allocator.allocate(sizeof(limo_msgs__action__LimoAction_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limo_msgs__action__LimoAction_SendGoal_Request));
  bool success = limo_msgs__action__LimoAction_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limo_msgs__action__LimoAction_SendGoal_Request__destroy(limo_msgs__action__LimoAction_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limo_msgs__action__LimoAction_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__init(limo_msgs__action__LimoAction_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_SendGoal_Request * data = NULL;

  if (size) {
    data = (limo_msgs__action__LimoAction_SendGoal_Request *)allocator.zero_allocate(size, sizeof(limo_msgs__action__LimoAction_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limo_msgs__action__LimoAction_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limo_msgs__action__LimoAction_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__fini(limo_msgs__action__LimoAction_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      limo_msgs__action__LimoAction_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

limo_msgs__action__LimoAction_SendGoal_Request__Sequence *
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_SendGoal_Request__Sequence * array = (limo_msgs__action__LimoAction_SendGoal_Request__Sequence *)allocator.allocate(sizeof(limo_msgs__action__LimoAction_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limo_msgs__action__LimoAction_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__destroy(limo_msgs__action__LimoAction_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limo_msgs__action__LimoAction_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__are_equal(const limo_msgs__action__LimoAction_SendGoal_Request__Sequence * lhs, const limo_msgs__action__LimoAction_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limo_msgs__action__LimoAction_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limo_msgs__action__LimoAction_SendGoal_Request__Sequence__copy(
  const limo_msgs__action__LimoAction_SendGoal_Request__Sequence * input,
  limo_msgs__action__LimoAction_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(limo_msgs__action__LimoAction_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    limo_msgs__action__LimoAction_SendGoal_Request * data =
      (limo_msgs__action__LimoAction_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limo_msgs__action__LimoAction_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          limo_msgs__action__LimoAction_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!limo_msgs__action__LimoAction_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
limo_msgs__action__LimoAction_SendGoal_Response__init(limo_msgs__action__LimoAction_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    limo_msgs__action__LimoAction_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
limo_msgs__action__LimoAction_SendGoal_Response__fini(limo_msgs__action__LimoAction_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
limo_msgs__action__LimoAction_SendGoal_Response__are_equal(const limo_msgs__action__LimoAction_SendGoal_Response * lhs, const limo_msgs__action__LimoAction_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
limo_msgs__action__LimoAction_SendGoal_Response__copy(
  const limo_msgs__action__LimoAction_SendGoal_Response * input,
  limo_msgs__action__LimoAction_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

limo_msgs__action__LimoAction_SendGoal_Response *
limo_msgs__action__LimoAction_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_SendGoal_Response * msg = (limo_msgs__action__LimoAction_SendGoal_Response *)allocator.allocate(sizeof(limo_msgs__action__LimoAction_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limo_msgs__action__LimoAction_SendGoal_Response));
  bool success = limo_msgs__action__LimoAction_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limo_msgs__action__LimoAction_SendGoal_Response__destroy(limo_msgs__action__LimoAction_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limo_msgs__action__LimoAction_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__init(limo_msgs__action__LimoAction_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_SendGoal_Response * data = NULL;

  if (size) {
    data = (limo_msgs__action__LimoAction_SendGoal_Response *)allocator.zero_allocate(size, sizeof(limo_msgs__action__LimoAction_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limo_msgs__action__LimoAction_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limo_msgs__action__LimoAction_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__fini(limo_msgs__action__LimoAction_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      limo_msgs__action__LimoAction_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

limo_msgs__action__LimoAction_SendGoal_Response__Sequence *
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_SendGoal_Response__Sequence * array = (limo_msgs__action__LimoAction_SendGoal_Response__Sequence *)allocator.allocate(sizeof(limo_msgs__action__LimoAction_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limo_msgs__action__LimoAction_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__destroy(limo_msgs__action__LimoAction_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limo_msgs__action__LimoAction_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__are_equal(const limo_msgs__action__LimoAction_SendGoal_Response__Sequence * lhs, const limo_msgs__action__LimoAction_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limo_msgs__action__LimoAction_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limo_msgs__action__LimoAction_SendGoal_Response__Sequence__copy(
  const limo_msgs__action__LimoAction_SendGoal_Response__Sequence * input,
  limo_msgs__action__LimoAction_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(limo_msgs__action__LimoAction_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    limo_msgs__action__LimoAction_SendGoal_Response * data =
      (limo_msgs__action__LimoAction_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limo_msgs__action__LimoAction_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          limo_msgs__action__LimoAction_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!limo_msgs__action__LimoAction_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
limo_msgs__action__LimoAction_GetResult_Request__init(limo_msgs__action__LimoAction_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    limo_msgs__action__LimoAction_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
limo_msgs__action__LimoAction_GetResult_Request__fini(limo_msgs__action__LimoAction_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
limo_msgs__action__LimoAction_GetResult_Request__are_equal(const limo_msgs__action__LimoAction_GetResult_Request * lhs, const limo_msgs__action__LimoAction_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
limo_msgs__action__LimoAction_GetResult_Request__copy(
  const limo_msgs__action__LimoAction_GetResult_Request * input,
  limo_msgs__action__LimoAction_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

limo_msgs__action__LimoAction_GetResult_Request *
limo_msgs__action__LimoAction_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_GetResult_Request * msg = (limo_msgs__action__LimoAction_GetResult_Request *)allocator.allocate(sizeof(limo_msgs__action__LimoAction_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limo_msgs__action__LimoAction_GetResult_Request));
  bool success = limo_msgs__action__LimoAction_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limo_msgs__action__LimoAction_GetResult_Request__destroy(limo_msgs__action__LimoAction_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limo_msgs__action__LimoAction_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limo_msgs__action__LimoAction_GetResult_Request__Sequence__init(limo_msgs__action__LimoAction_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_GetResult_Request * data = NULL;

  if (size) {
    data = (limo_msgs__action__LimoAction_GetResult_Request *)allocator.zero_allocate(size, sizeof(limo_msgs__action__LimoAction_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limo_msgs__action__LimoAction_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limo_msgs__action__LimoAction_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
limo_msgs__action__LimoAction_GetResult_Request__Sequence__fini(limo_msgs__action__LimoAction_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      limo_msgs__action__LimoAction_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

limo_msgs__action__LimoAction_GetResult_Request__Sequence *
limo_msgs__action__LimoAction_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_GetResult_Request__Sequence * array = (limo_msgs__action__LimoAction_GetResult_Request__Sequence *)allocator.allocate(sizeof(limo_msgs__action__LimoAction_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limo_msgs__action__LimoAction_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limo_msgs__action__LimoAction_GetResult_Request__Sequence__destroy(limo_msgs__action__LimoAction_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limo_msgs__action__LimoAction_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limo_msgs__action__LimoAction_GetResult_Request__Sequence__are_equal(const limo_msgs__action__LimoAction_GetResult_Request__Sequence * lhs, const limo_msgs__action__LimoAction_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limo_msgs__action__LimoAction_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limo_msgs__action__LimoAction_GetResult_Request__Sequence__copy(
  const limo_msgs__action__LimoAction_GetResult_Request__Sequence * input,
  limo_msgs__action__LimoAction_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(limo_msgs__action__LimoAction_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    limo_msgs__action__LimoAction_GetResult_Request * data =
      (limo_msgs__action__LimoAction_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limo_msgs__action__LimoAction_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          limo_msgs__action__LimoAction_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!limo_msgs__action__LimoAction_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "limo_msgs/action/detail/limo_action__functions.h"

bool
limo_msgs__action__LimoAction_GetResult_Response__init(limo_msgs__action__LimoAction_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!limo_msgs__action__LimoAction_Result__init(&msg->result)) {
    limo_msgs__action__LimoAction_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
limo_msgs__action__LimoAction_GetResult_Response__fini(limo_msgs__action__LimoAction_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  limo_msgs__action__LimoAction_Result__fini(&msg->result);
}

bool
limo_msgs__action__LimoAction_GetResult_Response__are_equal(const limo_msgs__action__LimoAction_GetResult_Response * lhs, const limo_msgs__action__LimoAction_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!limo_msgs__action__LimoAction_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
limo_msgs__action__LimoAction_GetResult_Response__copy(
  const limo_msgs__action__LimoAction_GetResult_Response * input,
  limo_msgs__action__LimoAction_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!limo_msgs__action__LimoAction_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

limo_msgs__action__LimoAction_GetResult_Response *
limo_msgs__action__LimoAction_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_GetResult_Response * msg = (limo_msgs__action__LimoAction_GetResult_Response *)allocator.allocate(sizeof(limo_msgs__action__LimoAction_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limo_msgs__action__LimoAction_GetResult_Response));
  bool success = limo_msgs__action__LimoAction_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limo_msgs__action__LimoAction_GetResult_Response__destroy(limo_msgs__action__LimoAction_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limo_msgs__action__LimoAction_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limo_msgs__action__LimoAction_GetResult_Response__Sequence__init(limo_msgs__action__LimoAction_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_GetResult_Response * data = NULL;

  if (size) {
    data = (limo_msgs__action__LimoAction_GetResult_Response *)allocator.zero_allocate(size, sizeof(limo_msgs__action__LimoAction_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limo_msgs__action__LimoAction_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limo_msgs__action__LimoAction_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
limo_msgs__action__LimoAction_GetResult_Response__Sequence__fini(limo_msgs__action__LimoAction_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      limo_msgs__action__LimoAction_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

limo_msgs__action__LimoAction_GetResult_Response__Sequence *
limo_msgs__action__LimoAction_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_GetResult_Response__Sequence * array = (limo_msgs__action__LimoAction_GetResult_Response__Sequence *)allocator.allocate(sizeof(limo_msgs__action__LimoAction_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limo_msgs__action__LimoAction_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limo_msgs__action__LimoAction_GetResult_Response__Sequence__destroy(limo_msgs__action__LimoAction_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limo_msgs__action__LimoAction_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limo_msgs__action__LimoAction_GetResult_Response__Sequence__are_equal(const limo_msgs__action__LimoAction_GetResult_Response__Sequence * lhs, const limo_msgs__action__LimoAction_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limo_msgs__action__LimoAction_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limo_msgs__action__LimoAction_GetResult_Response__Sequence__copy(
  const limo_msgs__action__LimoAction_GetResult_Response__Sequence * input,
  limo_msgs__action__LimoAction_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(limo_msgs__action__LimoAction_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    limo_msgs__action__LimoAction_GetResult_Response * data =
      (limo_msgs__action__LimoAction_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limo_msgs__action__LimoAction_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          limo_msgs__action__LimoAction_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!limo_msgs__action__LimoAction_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "limo_msgs/action/detail/limo_action__functions.h"

bool
limo_msgs__action__LimoAction_FeedbackMessage__init(limo_msgs__action__LimoAction_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    limo_msgs__action__LimoAction_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!limo_msgs__action__LimoAction_Feedback__init(&msg->feedback)) {
    limo_msgs__action__LimoAction_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
limo_msgs__action__LimoAction_FeedbackMessage__fini(limo_msgs__action__LimoAction_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  limo_msgs__action__LimoAction_Feedback__fini(&msg->feedback);
}

bool
limo_msgs__action__LimoAction_FeedbackMessage__are_equal(const limo_msgs__action__LimoAction_FeedbackMessage * lhs, const limo_msgs__action__LimoAction_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!limo_msgs__action__LimoAction_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
limo_msgs__action__LimoAction_FeedbackMessage__copy(
  const limo_msgs__action__LimoAction_FeedbackMessage * input,
  limo_msgs__action__LimoAction_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!limo_msgs__action__LimoAction_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

limo_msgs__action__LimoAction_FeedbackMessage *
limo_msgs__action__LimoAction_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_FeedbackMessage * msg = (limo_msgs__action__LimoAction_FeedbackMessage *)allocator.allocate(sizeof(limo_msgs__action__LimoAction_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(limo_msgs__action__LimoAction_FeedbackMessage));
  bool success = limo_msgs__action__LimoAction_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
limo_msgs__action__LimoAction_FeedbackMessage__destroy(limo_msgs__action__LimoAction_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    limo_msgs__action__LimoAction_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__init(limo_msgs__action__LimoAction_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_FeedbackMessage * data = NULL;

  if (size) {
    data = (limo_msgs__action__LimoAction_FeedbackMessage *)allocator.zero_allocate(size, sizeof(limo_msgs__action__LimoAction_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = limo_msgs__action__LimoAction_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        limo_msgs__action__LimoAction_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__fini(limo_msgs__action__LimoAction_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      limo_msgs__action__LimoAction_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

limo_msgs__action__LimoAction_FeedbackMessage__Sequence *
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  limo_msgs__action__LimoAction_FeedbackMessage__Sequence * array = (limo_msgs__action__LimoAction_FeedbackMessage__Sequence *)allocator.allocate(sizeof(limo_msgs__action__LimoAction_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = limo_msgs__action__LimoAction_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__destroy(limo_msgs__action__LimoAction_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    limo_msgs__action__LimoAction_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__are_equal(const limo_msgs__action__LimoAction_FeedbackMessage__Sequence * lhs, const limo_msgs__action__LimoAction_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!limo_msgs__action__LimoAction_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
limo_msgs__action__LimoAction_FeedbackMessage__Sequence__copy(
  const limo_msgs__action__LimoAction_FeedbackMessage__Sequence * input,
  limo_msgs__action__LimoAction_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(limo_msgs__action__LimoAction_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    limo_msgs__action__LimoAction_FeedbackMessage * data =
      (limo_msgs__action__LimoAction_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!limo_msgs__action__LimoAction_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          limo_msgs__action__LimoAction_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!limo_msgs__action__LimoAction_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
