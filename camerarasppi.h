#ifndef CAMERARASPPI_H
#define CAMERARASPPI_H

#ifdef _arm_
#include <raspicam/raspicam_cv.h>
#endif


class CameraRaspPi
{
public:
    CameraRaspPi();
    void Initialize();
private:
#ifdef _arm_
    raspicam::RaspiCam_Cv mCamera; //Cmaera object
#endif
};

#endif // CAMERARASPPI_H
