cmake_minimum_required(VERSION 2.8.3)
project(iarc008_groundstation)

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
set(CMAKE_BUILD_TYPE Release)


include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
     message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()


find_package(catkin REQUIRED COMPONENTS
tf
cv_bridge
image_transport
pcl_conversions
pcl_ros

roscpp
rospy
message_generation
)

find_package(Boost REQUIRED COMPONENTS
  system
  thread
)


add_message_files(FILES
  example.msg
)

generate_messages(DEPENDENCIES
 #geometry_msgs
)

catkin_package(CATKIN_DEPENDS
message_runtime
)

set(CMAKE_PREFIX_PATH "/opt/opencv3.2.0")
find_package(OpenCV 3 REQUIRED)
find_package(Eigen3 REQUIRED)
find_package(Ceres REQUIRED)
find_package(PCL 1.8 REQUIRED)


INCLUDE_DIRECTORIES(
${catkin_INCLUDE_DIRS}
${CERES_INCLUDE_DIRS}
${Eigen_INCLUDE_DIRS}
${OpenCV_INCLUDE_DIRS}
${PCL_INCLUDE_DIRS}
)

set(LIBS
${catkin_LIBRARIES}
${OpenCV_LIBS}
${EIGEN3_LIBS}
${CERES_LIBRARIES}
${PCL_LIBRARY_DIRS}
)

add_subdirectory(src)
add_subdirectory(tests)
