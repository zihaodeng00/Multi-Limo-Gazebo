# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_learnning_piper_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED learnning_piper_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(learnning_piper_FOUND FALSE)
  elseif(NOT learnning_piper_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(learnning_piper_FOUND FALSE)
  endif()
  return()
endif()
set(_learnning_piper_CONFIG_INCLUDED TRUE)

# output package information
if(NOT learnning_piper_FIND_QUIETLY)
  message(STATUS "Found learnning_piper: 0.0.0 (${learnning_piper_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'learnning_piper' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${learnning_piper_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(learnning_piper_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${learnning_piper_DIR}/${_extra}")
endforeach()
