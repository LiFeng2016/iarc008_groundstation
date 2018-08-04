#include "example_publish.h"

void example_publish(int argc, char **argv)
{
	ros::init(argc, argv, "msg_talker");
	ros::NodeHandle n;
	ros::Publisher msg_pub = n.advertise<iarc008_groundstation::example>("example_msg", 1000);
	ros::Rate loop_rate(10);

	int count = 0;
	while (ros::ok())
	{
		iarc008_groundstation::example msg;

		msg.data = count;
	    msg_pub.publish(msg);
	    ros::spinOnce();
	    loop_rate.sleep();
	    ++count;
	}
}