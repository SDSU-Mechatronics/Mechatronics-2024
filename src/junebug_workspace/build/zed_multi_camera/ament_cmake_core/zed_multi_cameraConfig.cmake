# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_zed_multi_camera_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED zed_multi_camera_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(zed_multi_camera_FOUND FALSE)
  elseif(NOT zed_multi_camera_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(zed_multi_camera_FOUND FALSE)
  endif()
  return()
endif()
set(_zed_multi_camera_CONFIG_INCLUDED TRUE)

# output package information
if(NOT zed_multi_camera_FIND_QUIETLY)
  message(STATUS "Found zed_multi_camera: 0.1.0 (${zed_multi_camera_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'zed_multi_camera' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${zed_multi_camera_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(zed_multi_camera_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${zed_multi_camera_DIR}/${_extra}")
endforeach()
