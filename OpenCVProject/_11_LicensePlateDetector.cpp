#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
	VideoCapture cap(0);
	Mat result;

	CascadeClassifier faceCascade;
	faceCascade.load("../Resources/haarcascade_frontalface_default.xml");

	if (faceCascade.empty()) cout << "XML file not loaded" << endl;

	vector<Rect> faces;

	while (true) {
		cap.read(result);

		faceCascade.detectMultiScale(result, faces, 1.1, 10);

		for (int i = 0; i < faces.size(); i++)
		{
			rectangle(result, faces[i].tl(), faces[i].br(), Scalar(255, 0, 255), 3);
		}

		imshow("Result", result);
		waitKey(1);
	}
	return 0;
}