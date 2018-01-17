/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *Image;
    QTextBrowser *Output;
    QFrame *frame_2;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLineEdit *DataPath;
    QPushButton *ProtocolPathButton;
    QPushButton *ProjectPathButton;
    QLineEdit *ProtocolPath;
    QPushButton *Autoset;
    QLineEdit *ProjectPath;
    QPushButton *ProtocolRun;
    QLabel *ProtocolTime;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *DateLabel;
    QLabel *StainLabel;
    QLineEdit *Strain;
    QLineEdit *Age;
    QLabel *label_9;
    QDateEdit *SpawningDate;
    QLabel *label;
    QFrame *frame_3;
    QPushButton *UpdateCamera;
    QPushButton *Snapshot;
    QLabel *label_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *Exposure;
    QLabel *label_Exposure_unit;
    QLabel *label_Exposure;
    QLabel *label_AcqRate;
    QLabel *AcqRate;
    QLabel *label_AcqRate_unit;
    QFrame *frame;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QSpinBox *X1;
    QSpinBox *Y1;
    QSpinBox *Y2;
    QLabel *label_Crop;
    QSpinBox *X2;
    QFrame *frame_4;
    QPushButton *CheckSerial;
    QLabel *label_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1600, 1000);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Image = new QLabel(centralWidget);
        Image->setObjectName(QStringLiteral("Image"));
        Image->setGeometry(QRect(950, 10, 640, 512));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Image->sizePolicy().hasHeightForWidth());
        Image->setSizePolicy(sizePolicy);
        Image->setAutoFillBackground(false);
        Image->setStyleSheet(QStringLiteral("background-color: rgb(126, 126, 126);"));
        Image->setScaledContents(true);
        Image->setAlignment(Qt::AlignCenter);
        Output = new QTextBrowser(centralWidget);
        Output->setObjectName(QStringLiteral("Output"));
        Output->setGeometry(QRect(950, 530, 641, 401));
        Output->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 660, 931, 271));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayoutWidget_3 = new QWidget(frame_2);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(10, 160, 711, 95));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        DataPath = new QLineEdit(gridLayoutWidget_3);
        DataPath->setObjectName(QStringLiteral("DataPath"));
        DataPath->setEnabled(false);

        gridLayout_3->addWidget(DataPath, 1, 0, 1, 1);

        ProtocolPathButton = new QPushButton(gridLayoutWidget_3);
        ProtocolPathButton->setObjectName(QStringLiteral("ProtocolPathButton"));

        gridLayout_3->addWidget(ProtocolPathButton, 2, 1, 1, 1);

        ProjectPathButton = new QPushButton(gridLayoutWidget_3);
        ProjectPathButton->setObjectName(QStringLiteral("ProjectPathButton"));

        gridLayout_3->addWidget(ProjectPathButton, 0, 1, 1, 1);

        ProtocolPath = new QLineEdit(gridLayoutWidget_3);
        ProtocolPath->setObjectName(QStringLiteral("ProtocolPath"));

        gridLayout_3->addWidget(ProtocolPath, 2, 0, 1, 1);

        Autoset = new QPushButton(gridLayoutWidget_3);
        Autoset->setObjectName(QStringLiteral("Autoset"));

        gridLayout_3->addWidget(Autoset, 1, 1, 1, 1);

        ProjectPath = new QLineEdit(gridLayoutWidget_3);
        ProjectPath->setObjectName(QStringLiteral("ProjectPath"));

        gridLayout_3->addWidget(ProjectPath, 0, 0, 1, 1);

        ProtocolRun = new QPushButton(frame_2);
        ProtocolRun->setObjectName(QStringLiteral("ProtocolRun"));
        ProtocolRun->setGeometry(QRect(730, 160, 181, 51));
        ProtocolRun->setCheckable(true);
        ProtocolTime = new QLabel(frame_2);
        ProtocolTime->setObjectName(QStringLiteral("ProtocolTime"));
        ProtocolTime->setGeometry(QRect(750, 210, 141, 41));
        QFont font;
        font.setFamily(QStringLiteral("DejaVu Sans"));
        font.setPointSize(20);
        ProtocolTime->setFont(font);
        ProtocolTime->setAlignment(Qt::AlignCenter);
        gridLayoutWidget_2 = new QWidget(frame_2);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 40, 231, 111));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        DateLabel = new QLabel(gridLayoutWidget_2);
        DateLabel->setObjectName(QStringLiteral("DateLabel"));

        gridLayout_2->addWidget(DateLabel, 1, 0, 1, 1);

        StainLabel = new QLabel(gridLayoutWidget_2);
        StainLabel->setObjectName(QStringLiteral("StainLabel"));

        gridLayout_2->addWidget(StainLabel, 0, 0, 1, 1);

        Strain = new QLineEdit(gridLayoutWidget_2);
        Strain->setObjectName(QStringLiteral("Strain"));

        gridLayout_2->addWidget(Strain, 0, 1, 1, 1);

        Age = new QLineEdit(gridLayoutWidget_2);
        Age->setObjectName(QStringLiteral("Age"));
        Age->setEnabled(false);

        gridLayout_2->addWidget(Age, 2, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        SpawningDate = new QDateEdit(gridLayoutWidget_2);
        SpawningDate->setObjectName(QStringLiteral("SpawningDate"));

        gridLayout_2->addWidget(SpawningDate, 1, 1, 1, 1);

        label = new QLabel(frame_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 81, 17));
        label->setMinimumSize(QSize(71, 17));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 10, 501, 291));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        UpdateCamera = new QPushButton(frame_3);
        UpdateCamera->setObjectName(QStringLiteral("UpdateCamera"));
        UpdateCamera->setGeometry(QRect(10, 240, 101, 41));
        Snapshot = new QPushButton(frame_3);
        Snapshot->setObjectName(QStringLiteral("Snapshot"));
        Snapshot->setGeometry(QRect(120, 240, 101, 41));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 81, 17));
        label_2->setMinimumSize(QSize(71, 17));
        label_2->setFont(font1);
        gridLayoutWidget = new QWidget(frame_3);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 40, 171, 61));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Exposure = new QLineEdit(gridLayoutWidget);
        Exposure->setObjectName(QStringLiteral("Exposure"));
        sizePolicy.setHeightForWidth(Exposure->sizePolicy().hasHeightForWidth());
        Exposure->setSizePolicy(sizePolicy);
        Exposure->setMaximumSize(QSize(60, 16777215));
        Exposure->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Exposure, 0, 1, 1, 1);

        label_Exposure_unit = new QLabel(gridLayoutWidget);
        label_Exposure_unit->setObjectName(QStringLiteral("label_Exposure_unit"));

        gridLayout->addWidget(label_Exposure_unit, 0, 2, 1, 1);

        label_Exposure = new QLabel(gridLayoutWidget);
        label_Exposure->setObjectName(QStringLiteral("label_Exposure"));

        gridLayout->addWidget(label_Exposure, 0, 0, 1, 1);

        label_AcqRate = new QLabel(gridLayoutWidget);
        label_AcqRate->setObjectName(QStringLiteral("label_AcqRate"));

        gridLayout->addWidget(label_AcqRate, 1, 0, 1, 1);

        AcqRate = new QLabel(gridLayoutWidget);
        AcqRate->setObjectName(QStringLiteral("AcqRate"));
        AcqRate->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(AcqRate, 1, 1, 1, 1);

        label_AcqRate_unit = new QLabel(gridLayoutWidget);
        label_AcqRate_unit->setObjectName(QStringLiteral("label_AcqRate_unit"));

        gridLayout->addWidget(label_AcqRate_unit, 1, 2, 1, 1);

        frame = new QFrame(frame_3);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 110, 381, 121));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget_4 = new QWidget(frame);
        gridLayoutWidget_4->setObjectName(QStringLiteral("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(10, 10, 209, 104));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        X1 = new QSpinBox(gridLayoutWidget_4);
        X1->setObjectName(QStringLiteral("X1"));
        X1->setAlignment(Qt::AlignCenter);
        X1->setMinimum(0);
        X1->setMaximum(1248);
        X1->setSingleStep(4);
        X1->setValue(0);

        gridLayout_4->addWidget(X1, 1, 0, 1, 1);

        Y1 = new QSpinBox(gridLayoutWidget_4);
        Y1->setObjectName(QStringLiteral("Y1"));
        Y1->setAlignment(Qt::AlignCenter);
        Y1->setMaximum(1024);
        Y1->setSingleStep(8);
        Y1->setValue(0);

        gridLayout_4->addWidget(Y1, 0, 1, 1, 1);

        Y2 = new QSpinBox(gridLayoutWidget_4);
        Y2->setObjectName(QStringLiteral("Y2"));
        Y2->setAlignment(Qt::AlignCenter);
        Y2->setMaximum(1024);
        Y2->setSingleStep(2);
        Y2->setValue(1024);

        gridLayout_4->addWidget(Y2, 2, 1, 1, 1);

        label_Crop = new QLabel(gridLayoutWidget_4);
        label_Crop->setObjectName(QStringLiteral("label_Crop"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_Crop->sizePolicy().hasHeightForWidth());
        label_Crop->setSizePolicy(sizePolicy1);
        label_Crop->setMaximumSize(QSize(60, 16777215));
        label_Crop->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_Crop, 1, 1, 1, 1);

        X2 = new QSpinBox(gridLayoutWidget_4);
        X2->setObjectName(QStringLiteral("X2"));
        X2->setAlignment(Qt::AlignCenter);
        X2->setMinimum(32);
        X2->setMaximum(1280);
        X2->setSingleStep(4);
        X2->setValue(1280);

        gridLayout_4->addWidget(X2, 1, 2, 1, 1);

        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(9, 450, 931, 201));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        CheckSerial = new QPushButton(frame_4);
        CheckSerial->setObjectName(QStringLiteral("CheckSerial"));
        CheckSerial->setGeometry(QRect(10, 60, 99, 31));
        label_3 = new QLabel(frame_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 81, 17));
        label_3->setMinimumSize(QSize(71, 17));
        label_3->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1600, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Image->setText(QString());
        ProtocolPathButton->setText(QApplication::translate("MainWindow", "Protocol ...", 0));
        ProjectPathButton->setText(QApplication::translate("MainWindow", "Project ...", 0));
        Autoset->setText(QApplication::translate("MainWindow", "Autoset", 0));
        ProtocolRun->setText(QApplication::translate("MainWindow", "Run Protocol", 0));
        ProtocolTime->setText(QApplication::translate("MainWindow", "00:00:00", 0));
        DateLabel->setText(QApplication::translate("MainWindow", "Spawning date", 0));
        StainLabel->setText(QApplication::translate("MainWindow", "Strain", 0));
        Strain->setText(QApplication::translate("MainWindow", "WT", 0));
        Age->setText(QApplication::translate("MainWindow", "0", 0));
        label_9->setText(QApplication::translate("MainWindow", "Age", 0));
        label->setText(QApplication::translate("MainWindow", "Protocols", 0));
        UpdateCamera->setText(QApplication::translate("MainWindow", "Update ", 0));
        Snapshot->setText(QApplication::translate("MainWindow", "Snapshot", 0));
        label_2->setText(QApplication::translate("MainWindow", "Camera", 0));
        Exposure->setText(QApplication::translate("MainWindow", "40", 0));
        label_Exposure_unit->setText(QApplication::translate("MainWindow", "ms", 0));
        label_Exposure->setText(QApplication::translate("MainWindow", "Exposure", 0));
        label_AcqRate->setText(QApplication::translate("MainWindow", "Acq. rate", 0));
        AcqRate->setText(QApplication::translate("MainWindow", "25", 0));
        label_AcqRate_unit->setText(QApplication::translate("MainWindow", "Hz", 0));
        label_Crop->setText(QApplication::translate("MainWindow", "Crop", 0));
        CheckSerial->setText(QApplication::translate("MainWindow", "Init Serial", 0));
        label_3->setText(QApplication::translate("MainWindow", "Serial", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
