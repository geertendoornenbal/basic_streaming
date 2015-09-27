#include "camerarasppi.h"
#include <opencv2/opencv.hpp>

CameraRaspPi::CameraRaspPi()
{

}

void CameraRaspPi::Initialize()
{
#ifdef _arm_

    mCamera.set( CV_CAP_PROP_FORMAT, CV_8UC1 );
    if (!mCamera.open())
    {
        std::cerr<<"Error opening the camera"<<endl;
        return -1;
    }
#endif
}
