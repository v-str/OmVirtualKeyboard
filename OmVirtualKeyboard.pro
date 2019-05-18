QT       += core gui widgets virtualkeyboard

TARGET = OmVirtualKeyboard
TEMPLATE = app

CONFIG += c++14

INCLUDEPATH += \
        sources \
        headers \
        ui \

SOURCES += \
        sources/main.cpp \
        sources/omvirtualkeyboard.cpp

HEADERS += \
        headers/omvirtualkeyboard.h

FORMS += \
        sources/omvirtualkeyboard.ui \

RESOURCES += \
    resources/test_image.jpg

