#ifndef CAMERA_H
#define CAMERA_H
#include <opencv2/opencv.hpp>

class Camera
{
public:
    Camera();
    virtual void Initialize() = 0;
    virtual cv::Mat* GrabImage();
protected:
    virtual cv::VideoCapture* GetCamera() = 0;
};

#endif // CAMERA_H
