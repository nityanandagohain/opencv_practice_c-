#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main()
{
	VideoCapture cap("vtest.avi");
	if(!cap.isOpened())
		return -1;
	Mat frame;
	for(;;)
	{
		cap>>frame;
		imshow("Video Footage",frame);
		if(waitKey(33)>=0)
			break;
	}
	return 0;
}
