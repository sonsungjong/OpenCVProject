#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

class EditImg
{
private:
	string path;
	Mat img, imgBlur, imgCanny, imgDil, imgErode;
	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
	
public:
	void _Init(string path) {
		this->path = path;
		img = imread(this->path);
	}

	void _Show(string name) {
		imshow(name, img);
	}

	void _Gray(string name) {
		Mat imgGray;
		cvtColor(img, imgGray, COLOR_BGR2GRAY);
		imshow(name, imgGray);
	}

	void _GaussianBlur(string name) {
		
		GaussianBlur(img, imgBlur, Size(3, 3), 3, 0);		// 
		imshow(name, imgBlur);
	}

	void _Canny(string name) {
		Canny(imgBlur, imgCanny, 25, 75);
		imshow(name, imgCanny);
	}

	void _Dilate(string name) {
		dilate(imgCanny, imgDil, kernel);
		imshow(name, imgDil);
	}

	void _Erode(string name) {
		erode(imgDil, imgErode, kernel);
		imshow(name, imgErode);
	}
};

int main() {
	EditImg ei;

	ei._Init("../Resources/test.png");
	ei._Show("Origin");
	ei._Gray("Gray");
	ei._GaussianBlur("Blur");
	ei._Canny("Canny");
	ei._Dilate("Dilation");
	ei._Erode("Erode");

	waitKey(0);

	return 0;
}

/*
	string path = "../Resources/test.png"
	Mat img = imread(path);
	Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;

	cvtColor(img, imgGray, COLOR_BGR2GRAY);
	GaussianBlur(img, imgBlur, Size(3,3), 3, 0);
	Canny(imgBlur, imgCanny, 25, 75);

	Mat kernel = getStructuringElement(MORPH_RECT, Size(3,3));
	dilate(imgCanny, imgDil, kernel);
	erode(imgDil, imgErode, kernel);

	imshow("Origin", img);
	imshow("Gray", imgGray);
	imshow("Blur", imgBlur);
	imshow("Canny", imgCanny);
	imshow("Dilation", imgDil);
	imshow("Erode", imgErode);
	waitKey(0);
*/