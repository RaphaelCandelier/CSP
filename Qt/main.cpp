#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {

    // Message handler
    qInstallMessageHandler(MsgHandlerFcn);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
