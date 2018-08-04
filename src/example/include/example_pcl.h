#ifndef _EXAMPLE_PCL_H_
#define _EXAMPLE_PCL_H_

#include <pcl/visualization/cloud_viewer.h>
#include <pcl/io/io.h>
#include <pcl/io/pcd_io.h>

#include <iostream>


void viewerOneOff (pcl::visualization::PCLVisualizer& viewer);
void viewerPsycho (pcl::visualization::PCLVisualizer& viewer);
void example_pcl();
#endif