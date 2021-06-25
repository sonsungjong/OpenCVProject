#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// �̹���
int image_imshow() {
	string path = "../Resources/test.png";
	Mat img = imread(path);
	imshow("img", img);
	waitKey(0);

	return 0;
}

// ������
int mp4_imshow() {
	string path = "../Resources/test_video.mp4";
	VideoCapture cap(path);
	Mat img;

	while (true) {
		cap.read(img);
		imshow("WebCam", img);
		waitKey(20);		// 20ms
	}
	return 0;
}

// ��ķ
int cam_imshow() {
	VideoCapture cap(1);
	Mat img;

	while (true) {
		cap.read(img);
		imshow("WebCam", img);
		waitKey(1);
	}
	return 0;
}