/*
	Visual Studio 2019 다운로드
	C++ 설치
	OpenCV 4.5.x 다운로드
	https://github.com/opencv/opencv.git	-> 오른쪽 Releases의 OpenCV클릭	-> opencv-4.5.x-vc14_vc15.exe 다운

	환경 변수 -> user에 대한 사용자 변수 Path	-> bin폴더 추가(C:\opencv\build\x64\vc15\bin)	-> 재부팅
	
	VC++ 프로젝트 플랫폼 대상을 x64로 변경
	
	프로젝트 우클릭(솔루션 아님) -> 속성 -> VC++ Directories ->
	Include Directories에 C:\opencv\build\include;
	Library Directories에 C:\opencv\build\x64\vc15\lib;
	경로 복붙

	속성 -> Linker -> Additional Dependencies -> C:\opencv\build\x64\vc15\lib에 있는 lib 파일명 입력 (확장자까지 포함입력)
	opencv_world452.lib 는 Release 모드 전용
	opencv_world452d.lib 는 Debug 모드 전용
*/

/*
	Xcode 설치
	(Homebrew 설치) brew.sh 홈페이지 -> Install Homebrew 명령어 복사 -> 터미널에 붙여넣기

	brew install opencv

	Xcode new프로젝트 -> macOS -> Command Line Tool -> C++선택

	최상단 솔루션폴더 우클릭 -> Add Files to "프로젝트명" 클릭 -> /usr/local/Cellar/opencv 로 이동
	4.5.x_x폴더 -> lib폴더 -> 모든 .dylib 선택 -> Add
	(확장자로 정렬해서 선택하면 편함)

	Build Settings -> All, Combined 셀렉 -> Header Search Paths -> + ->
	/usr/local/Cellar/opencv/4.5.2_5/include/opencv4 복붙 -> recursive 로 변경 -> 닫기

	프로젝트 폴더 혹은 솔루션 폴더에 Resources 복붙

	실행

	*맥북 카메라허용*
	File -> New -> File... -> Property List -> 이름을 info로 저장 -> info.plist 더블클릭 -> + -> NSCameraUsageDescription 이름입력 ->
	$(PRODUCT_NAME) camera use 벌류입력

	info.plist를 Products폴더 Finder로 열기하여 Debug폴더에 옮기기
*/

/*
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;
*/