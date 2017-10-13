/*This programs ask the values for x & y cordinate and display the bgr value at 
 * the coordinate*/

#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main(int argc,char **argv){
	//reading the image from the same directory and storing in the image matrix
	Mat image;
	image=imread("HappyFish.jpg",IMREAD_COLOR);

	if(!image.data){
		cout<<"Image Not Founf\n";
		return 0;
	}


	while(1){
		int x,y;
		cout<<"Enter the (x,y) coordinates for which you want to see the pixel values\n";
		cout<<"rows:"<<image.rows;
		cout<<"\nCol:"<<image.cols;
		cout<<"Enter x:";
		cin>>x;
		cout<<"Enter y:";
		cin>>y;
		if(x<image.rows){
			if(y<image.cols){
				Vec3b imagepixel=image.at<Vec3b>(x,y);
				cout<<"Image pixels at "<<x<<","<<y<<" is "<<imagepixel;
			}
		}
		else
			cout<<"x & y are not in range\n";
	}
return 0;
}
