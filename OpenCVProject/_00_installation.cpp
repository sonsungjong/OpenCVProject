/*
	Visual Studio 2019 �ٿ�ε�
	C++ ��ġ
	OpenCV 4.5.x �ٿ�ε�
	https://github.com/opencv/opencv.git	-> ������ Releases�� OpenCVŬ��	-> opencv-4.5.x-vc14_vc15.exe �ٿ�

	ȯ�� ���� -> user�� ���� ����� ���� Path	-> bin���� �߰�(C:\opencv\build\x64\vc15\bin)	-> �����
	
	VC++ ������Ʈ �÷��� ����� x64�� ����
	
	������Ʈ ��Ŭ��(�ַ�� �ƴ�) -> �Ӽ� -> VC++ Directories ->
	Include Directories�� C:\opencv\build\include;
	Library Directories�� C:\opencv\build\x64\vc15\lib;
	��� ����

	�Ӽ� -> Linker -> Additional Dependencies -> C:\opencv\build\x64\vc15\lib�� �ִ� lib ���ϸ� �Է� (Ȯ���ڱ��� �����Է�)
	opencv_world452.lib �� Release ��� ����
	opencv_world452d.lib �� Debug ��� ����
*/

/*
	Xcode ��ġ
	(Homebrew ��ġ) brew.sh Ȩ������ -> Install Homebrew ��ɾ� ���� -> �͹̳ο� �ٿ��ֱ�

	brew install opencv

	Xcode new������Ʈ -> macOS -> Command Line Tool -> C++����

	�ֻ�� �ַ������ ��Ŭ�� -> Add Files to "������Ʈ��" Ŭ�� -> /usr/local/Cellar/opencv �� �̵�
	4.5.x_x���� -> lib���� -> ��� .dylib ���� -> Add
	(Ȯ���ڷ� �����ؼ� �����ϸ� ����)

	Build Settings -> All, Combined ���� -> Header Search Paths -> + ->
	/usr/local/Cellar/opencv/4.5.2_5/include/opencv4 ���� -> recursive �� ���� -> �ݱ�

	������Ʈ ���� Ȥ�� �ַ�� ������ Resources ����

	����

	*�ƺ� ī�޶����*
	File -> New -> File... -> Property List -> �̸��� info�� ���� -> info.plist ����Ŭ�� -> + -> NSCameraUsageDescription �̸��Է� ->
	$(PRODUCT_NAME) camera use �����Է�

	info.plist�� Products���� Finder�� �����Ͽ� Debug������ �ű��
*/

/*
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;
*/