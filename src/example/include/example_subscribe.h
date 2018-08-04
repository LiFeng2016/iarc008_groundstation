#ifndef _EXAMPLE_SUBSCRIBE_H_
#define _EXAMPLE_SUBSCRIBE_H_

#include <ros/ros.h>
#include <iarc008_groundstation/example.h>
#include <iostream>

using namespace std;

void msgCallback(const iarc008_groundstation::example msg);
void example_subscribe(int argc, char **argv);
#endif