/*program to load an image modify it to grayscale and save image using opencv function */
/*Remove the Gray_image.jpg before running */


#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc ,char **argv)
{
	char* imageName=argv[1];

	Mat image,grayimage;
	image=imread(imageName,CV_LOAD_IMAGE_COLOR);

	if(argc!=2 || !image.data)
	{
		cout<<"No Image"<<endl;
		return -1;
	}
	cvtColor(image,grayimage,CV_BGR2GRAY);
	imwrite("Gray_Image.jpg",grayimage);


	//displaying both the images
	
	namedWindow(imageName,WINDOW_AUTOSIZE);
	namedWindow("gray",WINDOW_AUTOSIZE);


	imshow(imageName,image);
	imshow("gray",grayimage);

	waitKey(0);

	return 0;
}

