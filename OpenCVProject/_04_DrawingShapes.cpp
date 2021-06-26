#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int mainShape() {
	//string path = "../Resources/test.png";
	Mat img = { 512, 512, CV_8UC3, Scalar(255, 255, 255) };		// BGR

	// �β��� FILLED�� �ָ� ��ü ��ĥ
	circle(img, Point(256, 256), 155, Scalar(0, 69, 255), 10);		// ��(src, Point(x,y), ����, Scalar(B,G,R), �β�)
	rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 0, 255), FILLED);		// �簢��(src, Point(x1,y1), Point(x2, y2), Scalar(B,G,R), �β�)
	line(img, Point(130, 296), Point(382, 450), Scalar(255, 0, 0), 2);		// ��(src, Point(x1,y1), Point(x2, y2), Scalar(B,G,R), �β�)

	imshow("origin", img);

	waitKey(0);

	return 0;
}