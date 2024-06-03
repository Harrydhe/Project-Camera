#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCamera>
#include <QVideoWidget>
#include <QImageCapture>
#include <QMediaCaptureSession>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_start_camera_clicked();
    void on_pushButton_stop_camera_clicked();
    void on_pushButton_capture_image_clicked();
    void processCapturedImage(int id, const QImage &preview);

private:
    Ui::MainWindow *ui;
    QCamera *camera;
    QVideoWidget *videoWidget;
    QImageCapture *imageCapture;
    QMediaCaptureSession *captureSession;
};

#endif // MAINWINDOW_H
