#include "stdafx.h"

class Drawing {
public:
	void Draw(cv::Mat image) 
    {
     
        image.at<cv::Vec3b>(256, 256).
        
        cv::rectangle(image, cv::Point(0, 0), cv::Point(512, 512), cv::Scalar(0, 0, 255), 5, 8);
        //image.at<cv::Vec3b>(256, 256)[0] = 255;
        imshow("Image", image); // Display the image
        cv::waitKey(0);
	}
};

