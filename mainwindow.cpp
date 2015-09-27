#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cvimagewidget.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    CVImageWidget* imageWidget = new CVImageWidget();
    //w.setCentralWidget(imageWidget);

    ui->verticalLayout->addWidget(imageWidget);
    // Load an image
    cv::Mat image = cv::imread("Lenna.png", true);
    imageWidget->showImage(image);
}

MainWindow::~MainWindow()
{
    delete ui;
}
