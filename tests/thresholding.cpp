#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <iostream>

using namespace std;
using namespace cv;

// global variables

int threshold_value = 150;
int threshold_type = 0;
int const max_value = 255;
int const max_type = 4;
int const max_binary_value = 255;

Mat src, src_gray, dst;

char* window_name = "Threshold Demo";
char* trackbar_type = "Type: \n0. Bianry \n1. Binary Inverted \n2. Truncate \n3. To Zero \n4. To Zero Inverted";
char* trackbar_value = "Value";

// Function headers
void Threshold_Demo(int, void*);

int main(int argc, char** argv)
{
	src = imread("../data/E1.jpg", 1);

	cvtColor(src, src_gray, COLOR_BGR2GRAY);

	namedWindow(window_name, WINDOW_AUTOSIZE);

	// Create trackbar to choose type of threshold
	createTrackbar(trackbar_type,
			window_name, &threshold_type,
			max_type, Threshold_Demo);

	createTrackbar(trackbar_type,
			window_name, &threshold_value,
			max_value, Threshold_Demo);

	// Call the function to initialize
	Threshold_Demo(0, 0);

	while(1)
	{
		int c;
		c = cv::waitKey(20);
		if((char)c==27)
			break;
	}
}

void Threshold_Demo(int, void*)
{
	/*
	0: Binary
	1: Binary Inverted
	2: Threshold Truncated
	3: Threshold to Zero
	4: Threshold to Zero Inverted
	*/

	threshold(src_gray, dst, threshold_value, max_binary_value, threshold_type);

	cv::imshow(window_name, dst);
}
