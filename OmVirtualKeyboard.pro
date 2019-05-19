QT += core gui widgets virtualkeyboard dbus

TARGET = OmVirtualKeyboard
TEMPLATE = app

CONFIG += c++14

INCLUDEPATH += \
        $$PWD/src \
        $$PWD/headers \

SOURCES += $$PWD/src/*.cpp \

HEADERS += $$PWD/headers/*.h \

FORMS += $$PWD/src/*.ui

