#include "example_opencv.h"

void example_opencv()
{
	Mat img = imread("/home/hitcsc/catkin_ws/src/iarc008_groundstation/datasets/lena.jpg");
	cvNamedWindow("image");

	imshow("image", img);
	waitKey(0);
}