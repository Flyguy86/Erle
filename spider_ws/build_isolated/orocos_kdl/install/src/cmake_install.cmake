# Install script for directory: /home/erle/spider_ws/src/orocos_kdl/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/erle/spider_ws/install_isolated")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so.1.3.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so.1.3"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/erle/spider_ws/build_isolated/orocos_kdl/install/src/liborocos-kdl.so.1.3.0"
    "/home/erle/spider_ws/build_isolated/orocos_kdl/install/src/liborocos-kdl.so.1.3"
    "/home/erle/spider_ws/build_isolated/orocos_kdl/install/src/liborocos-kdl.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so.1.3.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so.1.3"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/liborocos-kdl.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kdl" TYPE FILE FILES
    "/home/erle/spider_ws/src/orocos_kdl/src/kinfam_io.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/chainjnttojacsolver.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/jntarray.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/chainfksolverpos_recursive.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/treeiksolverpos_nr_jl.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/path_cyclic_closed.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/chainfksolver.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/trajectory_composite.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/rigidbodyinertia.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/treefksolver.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/chainiksolvervel_wdls.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/trajectory_segment.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/motion.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/velocityprofile_trap.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/frames.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/rotational_interpolation_sa.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/treeiksolver.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/velocityprofile_dirac.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/chainfksolvervel_recursive.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/treefksolverpos_recursive.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/frames_io.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/jntarrayacc.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/chainidsolver_recursive_newton_euler.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/path.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/articulatedbodyinertia.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/velocityprofile_traphalf.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/treejnttojacsolver.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/chainiksolverpos_nr_jl.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/chainiksolverpos_nr.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/path_point.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/velocityprofile_rect.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/chainiksolverpos_lma.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/path_roundedcomposite.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/trajectory.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/framevel_io.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/treeiksolverpos_online.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/velocityprofile_spline.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/velocityprofile.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/joint.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/path_line.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/chainiksolvervel_pinv_givens.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/chain.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/framevel.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/jacobian.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/path_circle.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/frameacc_io.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/segment.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/kinfam.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/treeiksolvervel_wdls.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/chainidsolver_vereshchagin.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/frameacc.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/trajectory_stationary.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/stiffness.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/chainiksolver.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/rotationalinertia.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/rotational_interpolation.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/jntarrayvel.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/chaindynparam.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/jntspaceinertiamatrix.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/chainidsolver.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/solveri.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/chainiksolvervel_pinv.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/tree.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/chainiksolvervel_pinv_nso.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/kdl.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/path_composite.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/frameacc.inl"
    "/home/erle/spider_ws/src/orocos_kdl/src/frames.inl"
    "/home/erle/spider_ws/src/orocos_kdl/src/framevel.inl"
    "/home/erle/spider_ws/build_isolated/orocos_kdl/install/src/config.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/kdl/utilities" TYPE FILE FILES
    "/home/erle/spider_ws/src/orocos_kdl/src/utilities/rall1d_io.h"
    "/home/erle/spider_ws/src/orocos_kdl/src/utilities/utility.h"
    "/home/erle/spider_ws/src/orocos_kdl/src/utilities/rall2d.h"
    "/home/erle/spider_ws/src/orocos_kdl/src/utilities/rall1d.h"
    "/home/erle/spider_ws/src/orocos_kdl/src/utilities/error.h"
    "/home/erle/spider_ws/src/orocos_kdl/src/utilities/utility_io.h"
    "/home/erle/spider_ws/src/orocos_kdl/src/utilities/traits.h"
    "/home/erle/spider_ws/src/orocos_kdl/src/utilities/rallNd.h"
    "/home/erle/spider_ws/src/orocos_kdl/src/utilities/kdl-config.h"
    "/home/erle/spider_ws/src/orocos_kdl/src/utilities/rall2d_io.h"
    "/home/erle/spider_ws/src/orocos_kdl/src/utilities/error_stack.h"
    "/home/erle/spider_ws/src/orocos_kdl/src/utilities/svd_eigen_Macie.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/utilities/svd_eigen_HH.hpp"
    "/home/erle/spider_ws/src/orocos_kdl/src/utilities/svd_HH.hpp"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/erle/spider_ws/build_isolated/orocos_kdl/install/src/orocos-kdl.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/erle/spider_ws/build_isolated/orocos_kdl/install/src/orocos_kdl.pc")
endif()

