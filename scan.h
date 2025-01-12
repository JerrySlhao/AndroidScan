#ifndef SCAN_H
#define SCAN_H

#include <QWidget>
#include <QCamera>
#include <QMediaCaptureSession>
#include <QVideoSink>
#include <QJniObject>
#include <QJniEnvironment>
#include <QVideoWidget>
#include <QZXing>
#include <QLabel>
#include <QMessageBox>
#include <QDir>
#include <QMediaDevices>
#include <QMediaRecorder>
#include <QImageCapture>

namespace Ui {
class Scan;
}

class Scan : public QWidget
{
    Q_OBJECT

public:
    explicit Scan(QWidget *parent = nullptr);
    ~Scan();

private:
    Ui::Scan *ui;
    QCamera* camera;
    QMediaCaptureSession* captureSession;
    QVideoWidget* videoWdiget;
};

#endif // SCAN_H
