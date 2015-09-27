#include "camera.h"

Camera::Camera()
{
}

cv::Mat* Camera::GrabImage()
{
    cv::Mat* lImage = new cv::Mat();
    GetCamera().grab();
    GetCamera().retrieve ( *lImage);
    return lImage;
}
