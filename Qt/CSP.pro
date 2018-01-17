#-------------------------------------------------
#
# Project created by QtCreator 2017-11-23T17:32:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets serialport

CONFIG += c++11

TARGET = CSP
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    Camera_FLIR.cpp \
    MsgHandler.cpp

HEADERS  += mainwindow.h \
    Camera_FLIR.h \
    MsgHandler.h

FORMS    += mainwindow.ui

DISTFILES += output.css

# === Platform-specific libraries ==========================================

# --- LINUX
unix:!macx: LIBS += -L/usr/local/Spinnaker/lib -lSpinnaker
unix:!macx: INCLUDEPATH += /usr/include/spinnaker
