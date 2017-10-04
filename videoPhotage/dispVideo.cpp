#include "opencv2/opencv.hpp"
using namespace cv;
int main(int ,char**){
	namedWindow("Video Footage",WINDOW_AUTOSIZE);
	VideoCapture cap(0);
	if(!cap.isOpened())
		return -1;
	Mat frame;
	for(;;)
	{
		cap>>frame;
		imshow("Video Footage",frame);
		if(waitKey(33) >= 0) break;
	}
	return 0;
}
