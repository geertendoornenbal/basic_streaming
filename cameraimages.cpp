#include "cameraimages.h"
#include <opencv2/opencv.hpp>

CameraImages::CameraImages(std::string aPath)
{
    mImagePath = new std::string(aPath);
}

void CameraImages::Initialize()
{
    mImageCapture = new cv::VideoCapture(*mImagePath);
}
