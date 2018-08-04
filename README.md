# iarc008_groundstation
This project is developed for mission 8 of the International Aerial Robotics Competition by HITCSC team.

# 1. Prerequisites

## C++11 or C++0x Compiler
We use the new thread and chrono functionalities of C++11.

## ROS kinetic(Ubuntu 16.04)
We use ROS kinetic for communication. Go to http://wiki.ros.org/kinetic/Installation/Ubuntu for installation instructions.

## OpenCV
We use [OpenCV](http://opencv.org) to manipulate images and features. **Tested with OpenCV 3.2.0 and the source code is placed in the Thirdparty/ directory.**

Go to Thirdparty directory, then:

sudo apt-get install build-essential  
sudo apt-get install cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev  
sudo apt-get install python-dev python-numpy libtbb2 libtbb-dev libjpeg-dev libpng-dev libtiff-dev libjasper-dev libdc1394-22-dev  


tar -xvf opencv.tar.gz && cd opencv/opencv-3.2.0  
mkdir installed  
mkdir build && cd build  
cmake -D CMAKE_BUILD_TYPE=Release -D CMAKE_INSTALL_PREFIX=../installed -D OPENCV_EXTRA_MODULES_PATH=../../opencv_contrib-3.2.0/modules ..  
make -j4  
make install  

## PCL
[PCL](http://pointclouds.org/).**Tested with PCL 1.8 and the source code is placed in the Thirdparty/ directory.**

Go to Thirdparty directory, then:

sudo apt-get update  
sudo apt-get install git build-essential linux-libc-dev  
sudo apt-get install cmake cmake-gui  
sudo apt-get install libusb-1.0-0-dev libusb-dev libudev-dev  
sudo apt-get install mpi-default-dev openmpi-bin openmpi-common  
sudo apt-get install libflann1.8 libflann-dev  
sudo apt-get install libeigen3-dev  
sudo apt-get install libboost-all-dev  
sudo apt-get install libvtk5.10-qt4 libvtk5.10 libvtk5-dev  
sudo apt-get install libqhull* libgtest-dev  
sudo apt-get install freeglut3-dev pkg-config  
sudo apt-get install libxmu-dev libxi-dev  
sudo apt-get install mono-complete  
sudo apt-get install qt-sdk openjdk-8-jdk openjdk-8-jre  

tar -xvf pcl.tar.gz && cd pcl  
mkdir release && cd release  
cmake -DCMAKE_BUILD_TYPE=None -DCMAKE_INSTALL_PREFIX=/usr -DBUILD_GPU=ON -DBUILD_apps=ON -DBUILD_examples=ON -DCMAKE_INSTALL_PREFIX=/usr ..  
make -j4  
sudo make install  


## Eigen3
**The source code is placed in the Thirdparty/ directory**

Go to Thirdparty directory, then:

tar -xvf eigen-3.3.4.tar.gz && cd eigen-3.3.4  
mkdir build && cd build  
cmake ..  
sudo make install  


## Ceres Solver
[**Ceres Solver**](http://ceres-solver.org). **The source code is placed in the Thirdparty/ directory**

Go to Thirdparty directory, then:

sudo apt-get install cmake  
sudo apt-get install libgoogle-glog-dev  
sudo apt-get install libatlas-base-dev  
sudo apt-get install libsuitesparse-dev  
sudo add-apt-repository ppa:bzindovic/suitesparse-bugfix-1319687  
sudo apt-get update  
sudo apt-get install libsuitesparse-dev  

tar -xvf ceres-solver-1.14.0.tar.gz  
mkdir ceres-bin  
cd ceres-bin  
cmake ../ceres-solver-1.14.0  
make -j4  
make test  
sudo make install  

# 文件框架

# 通信协议
