#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

// ====== img ======

int mainTest0(){
	/*
	string path = "../Resources/test.png";
	Mat img = imread(path);
	imshow("MyImg", img);
	waitKey(0);
	*/

	
	VideoCapture cap(1);
	Mat img;

	while(true){
		cap.read(img);
		imshow("WebCam", img);
		waitKey(1);
	}
	

	return 0;
}