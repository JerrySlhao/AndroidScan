#include "scan.h"
#include "ui_scan.h"

Scan::Scan(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Scan)
{
    ui->setupUi(this);

    // 判断有没有输入设备
    if( QMediaDevices::videoInputs().count() == 0 ) {
        QMessageBox::information(nullptr, QObject::tr("错误"), QObject::tr("没有找到输入设备"));
        return ;
    }
    // 设置摄像头
    camera = new QCamera(QMediaDevices::defaultVideoInput(), this);
    // 创建媒体会话
    captureSession = new QMediaCaptureSession(this);
    // 显示窗口
    videoWdiget = new QVideoWidget(this);
    ui->verticalLayout->addWidget(videoWdiget);
    // 绑定
    captureSession->setCamera(camera);
    captureSession->setVideoOutput(videoWdiget);
    // 启动摄像头
    camera->start();
    videoWdiget->show();
}

Scan::~Scan()
{
    delete ui;
}
