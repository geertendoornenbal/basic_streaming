#include "mainapplication.h"

MainApplication::MainApplication()
{
    lCamera = new CameraImages("/home/geerten/Documents/Geerten/Programmeren/RaspberryPi/basic_streaming/streaming/Lenna%1d.png");
    lCamera->Initialize();
}


MainApplication::~MainApplication()
{
    delete lCamera;
}

cv::Mat* MainApplication::GetNewImage()
{
    return lCamera->GrabImage();
    //cv::Mat image = cv::imread("Lenna.png", true);
}


