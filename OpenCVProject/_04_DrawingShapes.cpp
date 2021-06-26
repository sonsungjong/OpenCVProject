#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int mainShape() {
	//string path = "../Resources/test.png";
	Mat img = { 512, 512, CV_8UC3, Scalar(255, 255, 255) };		// BGR

	// 두께를 FILLED로 주면 전체 색칠
	circle(img, Point(256, 256), 155, Scalar(0, 69, 255), 10);		// 원(src, Point(x,y), 지름, Scalar(B,G,R), 두께)
	rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 0, 255), FILLED);		// 사각형(src, Point(x1,y1), Point(x2, y2), Scalar(B,G,R), 두께)
	line(img, Point(130, 296), Point(382, 450), Scalar(255, 0, 0), 2);		// 선(src, Point(x1,y1), Point(x2, y2), Scalar(B,G,R), 두께)

	imshow("origin", img);

	waitKey(0);

	return 0;
}