#-------------------------------------------------
#
# Project created by QtCreator 2016-04-01T21:20:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = kalkul
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Operations.cpp \
    Mathf.cpp

HEADERS  += mainwindow.h \
    Mathf.h \
    Operations.h

FORMS    += mainwindow.ui
