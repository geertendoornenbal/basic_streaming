#-------------------------------------------------
#
# Project created by QtCreator 2015-09-19T13:39:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = basic_streaming
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    camerarasppi.cpp \
    camera.cpp

HEADERS  += mainwindow.h \
    cvimagewidget.h \
    camerarasppi.h \
    camera.h

INCLUDEPATH += /usr/local/include/opencv
LIBS += -L/usr/local/lib
LIBS += -lopencv_core
LIBS += -lopencv_imgproc
LIBS += -lopencv_highgui
LIBS += -lopencv_ml
LIBS += -lopencv_video
LIBS += -lopencv_features2d
LIBS += -lopencv_calib3d
LIBS += -lopencv_objdetect
LIBS += -lopencv_contrib
LIBS += -lopencv_legacy
LIBS += -lopencv_flann
LIBS += -lopencv_nonfree

#LIBS += -lraspicam
#LIBS += -lraspicam_cv


FORMS    += mainwindow.ui

OTHER_FILES += \
    Lenna.png
