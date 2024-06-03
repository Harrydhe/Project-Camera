#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QVBoxLayout>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Membuat objek kamera dan widget video
    camera = new QCamera;
    videoWidget = new QVideoWidget(this);
    imageCapture = new QImageCapture;
    captureSession = new QMediaCaptureSession;

    // Menghubungkan objek kamera dengan sesi capture
    captureSession->setCamera(camera);
    captureSession->setVideoOutput(videoWidget);
    captureSession->setImageCapture(imageCapture);

    // Menghubungkan sinyal klik tombol ke slot yang sesuai
    connect(ui->pushButton_start_camera, &QPushButton::clicked, this, &MainWindow::on_pushButton_start_camera_clicked);
    connect(ui->pushButton_stop_camera, &QPushButton::clicked, this, &MainWindow::on_pushButton_stop_camera_clicked);
    connect(ui->pushButton_capture_image, &QPushButton::clicked, this, &MainWindow::on_pushButton_capture_image_clicked);

    // Mengatur ukuran tampilan video
    videoWidget->setFixedSize(840, 480); // Atur ukuran sesuai kebutuhan

    // Menempatkan videoWidget ke dalam widget_camera
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(videoWidget);
    ui->widget_camera->setLayout(layout);

    // Menghubungkan sinyal untuk menangani gambar yang ditangkap
    connect(imageCapture, &QImageCapture::imageCaptured, this, &MainWindow::processCapturedImage);

    // Mengatur ukuran jendela dialog
    resize(800, 600); // Menggunakan resize agar pengguna bisa mengubah ukuran jendela
}

MainWindow::~MainWindow()
{
    delete ui;
    delete camera;
    delete imageCapture;
    delete captureSession;
}

void MainWindow::on_pushButton_start_camera_clicked()
{
    camera->start();
}

void MainWindow::on_pushButton_stop_camera_clicked()
{
    camera->stop();
}

void MainWindow::on_pushButton_capture_image_clicked()
{
    if (imageCapture) {
        imageCapture->captureToFile();
    }
}

void MainWindow::processCapturedImage(int id, const QImage &preview)
{
    Q_UNUSED(id);
    qDebug() << "Captured image with id:" << id;
    // Debug: Tampilkan frame yang diambil
    // cv::imshow("Captured Frame", frame);
}
