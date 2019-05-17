QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OmVirtualKeyboard
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++14

INCLUDEPATH += \
        sources \
        headers \
        ui \

SOURCES += \
        sources/main.cpp \
        sources/mainwindow.cpp

HEADERS += \
        headers/mainwindow.h

FORMS += \
        ui/mainwindow.ui

