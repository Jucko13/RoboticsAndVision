// RobicsAndVision.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <opencv/cv.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

VideoCapture cap(0); //0 is the camera on the pc. Higher number is different camera. Insert filename to play video frame by frame


int main()
{

	namedWindow("Camera Window", WINDOW_AUTOSIZE);

	if (cap.isOpened()) {
		while (1) {
			Mat image;

			cap.read(image);

			if (!image.empty()) {

				circle(image, Point(15, 15), 6, Scalar(0, 0, 255), 1); //color is in BGR format NOT RGB!
				putText(image, "This is some text", Point(30, 30), FONT_HERSHEY_PLAIN, 1, Scalar(255, 0, 255));

				imshow("Camera Window", image);
				waitKey(10); //just a simple delay. Enter 0 for infinite wait till keypress
			} else {
				cout << "End of the file or camera disconnected!" << endl;
				system("Pause");
			}

		}

	} else {
		cout << "Could not open camera or file!" << endl;
		system("Pause");
	}

    return 0;
}

