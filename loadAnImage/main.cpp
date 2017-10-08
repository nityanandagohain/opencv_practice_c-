#include <opencv2/core/core.hpp> //basic building block of opencv library
#include <opencv2/highgui/highgui.hpp> //contains function for I/O operations
#include <iostream>
using namespace std;
using namespace cv;
int main(int argc ,char** argv)
{
	if(argc!=2)
	{
		cout<<"Usuage: Display Image\n";
		return -1;
	}

	Mat image;
	image= imread(argv[1],CV_LOAD_IMAGE_COLOR); //reading the file passed 
	if(!image.data)
	{
		cout<<"couldnt find image";
		return -1;
	}
	namedWindow("displayImage",WINDOW_AUTOSIZE);
	imshow("displayImage",image);
	waitKey(0); //wait for keystroke;
	return 0;
}

