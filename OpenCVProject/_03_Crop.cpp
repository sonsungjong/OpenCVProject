#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int mainCrop() {
	string path = "../Resources/test.png";
	Mat img = imread(path);
	Mat imgCrop;

	Rect roi = { 220, 100, 280, 300 };		// x1, y1, x2, y2
	imgCrop = img(roi);

	imshow("Image", img);
	imshow("Crop", imgCrop);

	waitKey(0);

	return 0;
}