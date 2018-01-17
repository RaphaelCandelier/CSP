#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent), ui(new Ui::MainWindow) {

    // === DEFINITIONS =====================================================

    SetupName = "CSP: Camera-Serial-Protocol";

    // --- Pathes
    filesep = QString(QDir::separator());
    progPath = QDir::currentPath() + filesep;
    projPath = QDir::currentPath();
    projPath = projPath.mid(0, projPath.toStdString().find_last_of(filesep.toStdString())) + filesep;

    // Run
    SaveRate = 10;              // Image saving rate (Hz)
    nRun = 0;
    nFrame = 0;
    ImgComment = QString();

    // Image writer
    ImgWriter = new QImageWriter;
    ImgWriter->setFormat("png");
    ImgWriter->setText("Author", SetupName);

    // === USER INTERFACE ==================================================

    // --- Main window

    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
    this->setWindowTitle(SetupName);

    // --- Set messages

    MsgHandle = new MsgHandler(ui->Output);

    // --- Set data path ------------------------

    ui->ProjectPath->setText(projPath);
    updatePath();

    // --- Shortcuts

    // Esc: Close
    s_Close = new QShortcut(Qt::Key_Escape, this);
    connect(s_Close, SIGNAL(activated()), QApplication::instance(), SLOT(quit()));


    // connect(ui->CheckSerial, SIGNAL(released()), this, SLOT(checkSerial()));

    connect(ui->ProjectPathButton, SIGNAL(clicked()), this, SLOT(BrowseProject()));
    // connect(ui->Autoset, SIGNAL(clicked()), this, SLOT(autoset()));
    // connect(ui->ProtocolPathButton, SIGNAL(clicked()), this, SLOT(BrowseProtocol()));
    // connect(ui->ProtocolRun, SIGNAL(toggled(bool)), this, SLOT(toggleProtocol(bool)));

    // connect(ui->Snapshot, SIGNAL(clicked()), this, SLOT(snapshot()));

    // connect(ui->LightValue, SIGNAL(editingFinished()), this, SLOT(setLight()));
    // connect(ui->Regulation, SIGNAL(released()), this, SLOT(setRegulation()));
    // connect(ui->setTemperatures, SIGNAL(released()), this, SLOT(setTemperatures()));

    // Thread info
    qInfo().nospace() << THREAD << "The main thread is " << QThread::currentThreadId();

    // === Camera ==========================================================

    qInfo() << TITLE_2 << "Camera";

    // Initialize Camera
    InitCamera();

    // === Custom parameters ===============================================

    // --- Spawning date

    ui->SpawningDate->setDate(QDate::currentDate());
    connect(ui->SpawningDate, SIGNAL(dateChanged(QDate)), this, SLOT(updateAge(QDate)));

}

MainWindow::~MainWindow() { delete ui; }

/* ====================================================================== *\
|    FILES AND FOLDERS                                                     |
\* ====================================================================== */

void MainWindow::BrowseProject() {

    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"), "/home", QFileDialog::ShowDirsOnly);
    if (dir.length()) {
        ui->ProjectPath->setText(dir + filesep);
        updatePath();
    }

}

void MainWindow::updatePath() {

    QDateTime now = QDateTime::currentDateTime();
    ui->DataPath->setText(ui->ProjectPath->text() + "Data" + filesep + now.toString("yyyy-MM-dd") + filesep);
    autoset();

}

void MainWindow::autoset() {

    // Create data folder?
    if (!QDir(ui->DataPath->text()).exists()) { QDir().mkdir(ui->DataPath->text()); }

    // Find last run
    nRun = 0;
    QDir DataDir(ui->DataPath->text());
    QFileInfoList FIL = DataDir.entryInfoList(QDir::AllDirs | QDir::NoDotAndDotDot, QDir::DirsFirst);
    foreach(const QFileInfo &elm, FIL) {
        if(QDir(elm.absoluteFilePath()).exists()) {

            QStringList tmp = elm.fileName().split(" ", QString::SkipEmptyParts);
            if (tmp.count()==2 || !tmp.at(0).compare("Run")) {
                nRun = tmp.at(1).toInt();
            }
        }
    }

    if (nRun) {
        ui->statusBar->showMessage(QString("Last run: %1").arg(nRun, 2, 10, QLatin1Char('0')));
    } else {
        ui->statusBar->showMessage(QString("No run for today"));
    }
}

/* ====================================================================== *\
|    CAMERA                                                                |
\* ====================================================================== */

void MainWindow::InitCamera() {

    Camera = new Camera_FLIR(0);

    // --- Connections
    connect(ui->UpdateCamera, SIGNAL(released()), this, SLOT(UpdateCamera()));
    connect(Camera, SIGNAL(newImageForDisplay(QPixmap)), this, SLOT(updateDisplay(QPixmap)));

    this->ArmCamera();

}

void MainWindow::ArmCamera() {

    // Update Settings
    Camera->Exposure = ui->Exposure->text().toFloat();
    Camera->X1 = ui->X1->text().toFloat();
    Camera->X2 = ui->X2->text().toFloat();
    Camera->Y1 = ui->Y1->text().toFloat();
    Camera->Y2 = ui->Y2->text().toFloat();

    // Camera->ROI.setRect(0,200,1280,600);

    // Create new camera
    Camera->newCamera();

}

void MainWindow::UpdateCamera() {

    Camera->stopCamera();
    this->ArmCamera();

}

void MainWindow::updateDisplay(QPixmap pix) { ui->Image->setPixmap(pix); }

/* ====================================================================== *\
|    CUSTOM PARAMETERS                                                     |
\* ====================================================================== */

void MainWindow::updateAge(QDate) {

    ui->Age->setText(QString::number(ui->SpawningDate->date().daysTo(QDate::currentDate())));

}
