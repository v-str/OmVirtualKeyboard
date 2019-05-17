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
        sources/mainwindow.cpp \
        sources/virtualkeyboard.cpp

HEADERS += \
        headers/mainwindow.h \
        sources/virtualkeyboard.h

FORMS += \
        sources/virtualkeyboard.ui \
        sources/mainwindow.ui

RESOURCES += \
    resources/test_image.jpg

