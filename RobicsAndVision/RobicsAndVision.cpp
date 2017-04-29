// RobicsAndVision.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <opencv/cv.h>
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/highgui.hpp>

using namespace cv;
using namespace std;


int main()
{

	Mat test = Mat(30,30, CV_8UC3, Scalar(255,255,0));

	circle(test, Point(15,15),6, Scalar(0,0,255),1);

	namedWindow("Display window", WINDOW_AUTOSIZE);

	imshow("Display window", test);

	waitKey(0);

    return 0;
}

