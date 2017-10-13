#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;

int main(int argc,char** argv){
	Mat image;
	image=imread("HappyFish.jpg",IMREAD_COLOR);
	if(!image.data){
		cout<<"Image not found\n";
		return 0;
	}
	cout<<"The pixel value of the whole image is \n";
	cout<<image;
	return 0;
}
