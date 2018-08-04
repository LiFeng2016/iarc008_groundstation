#include "example_subscribe.h"

void msgCallback(const iarc008_groundstation::example msg)
{
	float number = msg.data;
	cout << number << endl;
}

void example_subscribe(int argc,char ** argv)
{
  ros::init(argc,argv,"test1");
  ros::NodeHandle n;
  ros::Rate loop_rate(10);

  ros::Subscriber msg_sub = n.subscribe("example_msg", 100, msgCallback);


  while(ros::ok())
  {
  	  ros::spinOnce();
  	  loop_rate.sleep();
  }

}
