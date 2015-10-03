#ifndef CAMERAIMAGES_H
#define CAMERAIMAGES_H
#include "camera.h"

class CameraImages : public Camera
{
public:
    CameraImages(std::string aPath);
    void Initialize();
private:
    std::string* mImagePath;
    cv::VideoCapture* mImageCapture;
};

#endif // CAMERAIMAGES_H
