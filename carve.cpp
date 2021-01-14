#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>
#include <string>

using namespace std;
using namespace cv;


int main(int argc, char** argv)
{
	int threshold_value = 150;
	int n1 = 100;
	int n2 = 100;
	int n3 = 100;
	int const max_value = 255;

//	bool ret1, ret2;

        Mat greyimg1, greyimg2;
        Mat binaryimg1, binaryimg2;


	// Read the two image files
	Mat image1 = imread("data/E1.jpg");
	Mat image2 = imread("data/E2.jpg");

	if(image1.empty() || image2.empty())
	{
		cout<<"Cout not open or find the images"<<endl;
		system("puase");	// wait for any keypress
		return -1;
	}

	// Converting to greyscale
	cvtColor(image1, greyimg1, COLOR_BGR2GRAY);
	cvtColor(image2, greyimg2, COLOR_BGR2GRAY);

	// Binary thresholding
	threshold(greyimg1, binaryimg1, threshold_value, max_value, THRESH_BINARY );
	threshold(greyimg2, binaryimg2, threshold_value, max_value, THRESH_BINARY );


	// Creating 3 voxel arrays of 100x100x100
	ma1 = np.zeros((n1,n2,n3))
	ma2 = np.zeros((n1,n2,n3))
	ma = np.zeros((n1,n2,n3))

	Mat pixels1 = image1.clone();
	Mat pixels2 = image2.clone();

	// getting projection of 2 different views
	

	// Initializing window name
	string windowName = "Image1";

	namedWindow(windowName);
	cv::imshow(windowName, image1);
	cv::waitKey(0);

	//destroyWindow(windowName);

	return 0;
}
