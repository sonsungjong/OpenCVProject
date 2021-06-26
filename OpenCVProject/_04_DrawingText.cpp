#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main_putText() {
	Mat img = { 1024, 768, CV_8UC3, Scalar(255, 255, 255) };		// BGR

	// putText(src, "message", Point(x,y), FONT, 크기, Scalar(B,G,R), 두께);
	putText(img, "My opencv is so cool", Point(32, 128), FONT_HERSHEY_DUPLEX, 2, Scalar(0, 69, 255), 2);
	putText(img, "You look so beautiful", Point(32, 160), FONT_ITALIC, 0.75, Scalar(255, 69, 0), 2);
	putText(img, "I'm happy", Point(64, 256), FONT_HERSHEY_DUPLEX, 1, Scalar(255, 69, 0), 5);

	imshow("putText", img);

	waitKey(0);

	return 0;
}