QT += core gui widgets virtualkeyboard dbus

TARGET = OmVirtualKeyboard
TEMPLATE = app

CONFIG += c++14

VPATH += \
        $$PWD/src \
        $$PWD/headers \

DEPENDPATH += \
        $$PWD/src \
        $$PWD/headers \

INCLUDEPATH += \
        $$PWD/src \
        $$PWD/headers \

SOURCES += \
    basekeyboard.cpp \
    ruskeyboard.cpp \
    keyboardsymbols.cpp \
    main.cpp \
    digitsframe.cpp \
    engkeyboard.cpp \
    keyboardwidget.cpp \
    src/keyboardtextcorrector.cpp

HEADERS += \
    digitsframe.h \
    engkeyboard.h \
    basekeyboard.h \
    ruskeyboard.h \
    keyboardsymbols.h \
    keyboardwidget.h \
    src/keyboardtextcorrector.h

DISTFILES += \
    todo.om

FORMS += \
    digitsframe.ui \
    engkeyboard.ui \
    ruskeyboard.ui \
    keyboardwidget.ui

