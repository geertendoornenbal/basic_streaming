#ifndef MAINAPPLICATION_H
#define MAINAPPLICATION_H
#include "cameraimages.h"

class MainApplication
{
public:
    MainApplication();
    ~MainApplication();
    cv::Mat* GetNewImage();
private:
    CameraImages* lCamera;

};

#endif // MAINAPPLICATION_H
