#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QDir>
#include <QShortcut>
#include <QScrollBar>
#include <QVector>
#include <QDesktopWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>
#include <QTime>
#include <QFile>
#include <QHashIterator>
#include <QThread>
#include <QImageWriter>
#include <QFileDialog>

#include "MsgHandler.h"
#include "Camera_FLIR.h"

// === Mainwindow class ====================================================

namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow {

    Q_OBJECT

public:

    // --- Properties ---------------------------

    QString SetupName;

    // --- Methods ------------------------------

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:

    // Files and folders
    void BrowseProject();
    void autoset();

    // Protocols
    //void BrowseProtocol();
    //void toggleProtocol(bool);
    //void ProtoLoop();
    //void ProtocolLoop();


    // Camera
    void InitCamera();
    void ArmCamera();
    void UpdateCamera();
    void updateDisplay(QPixmap);

    // Images
    // void snapshot();
    // void GrabLoop();

    // Serial communication
    // void checkSerial();
    // void readSerial();

    // Custom parameters
    void updateAge(QDate);

private:

    // --- Properties ---------------------------

    // Files and folders
    QString filesep, progPath, projPath;

    // Window management
    Ui::MainWindow *ui;
    QShortcut *s_Close;

    // Messages
    MsgHandler *MsgHandle;

    // Camera
    Camera_FLIR *Camera;

    // Serial communication
    QSerialPort *Serial;
    bool skipSerial;

    // Run
    int nRun, SaveRate;
    qint64 nFrame;
    QString RunPath, ImgComment;
    QTimer *timerGrab;
    QImageWriter *ImgWriter;

    // Protocols
    QVector<QString> Protocol;
    QTime ProtocolTime;
    QTimer *timerProtocol;
    QString comment;


    // --- Methods ------------------------------

    // Directories
    void updatePath();

    // Serial communication
    // const char* str(QString);
    // void send(QString);



};

#endif // MAINWINDOW_H
