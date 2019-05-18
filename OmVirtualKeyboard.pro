QT       += core gui widgets virtualkeyboard

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
        sources/virtualkeyboard.cpp

HEADERS += \
        headers/virtualkeyboard.h

FORMS += \
        sources/virtualkeyboard.ui \

RESOURCES += \
    resources/test_image.jpg

