QT += core gui widgets virtualkeyboard dbus

TARGET = OmVirtualKeyboard
TEMPLATE = app

CONFIG += c++14

INCLUDEPATH += \
        $$PWD/src \
        $$PWD/headers \

SOURCES += $$PWD/src/*.cpp \

HEADERS += $$PWD/headers/*.h \

DISTFILES += \
    todo.om

FORMS += \
    src/digitsframe.ui \
    src/engkeyboard.ui \
    src/keyboardwidget.ui

