#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cameraimages.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    imageWidget = new CVImageWidget();
    //w.setCentralWidget(imageWidget);

    ui->verticalLayout->addWidget(imageWidget);
}

MainWindow::~MainWindow()
{
    delete imageWidget;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    cv::Mat* lImage = lApplication.GetNewImage();
    imageWidget->showImage(*lImage);
    lImage->release();
}
