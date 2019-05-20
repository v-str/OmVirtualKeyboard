#include "keyboardwidget.h"

#define FIXED_W     700
#define FIXED_H     300

KeyboardWidget::KeyboardWidget(QWidget *parent) :
    QWidget(parent)
{
    setInitialSettings();
}

KeyboardWidget::~KeyboardWidget()
{
}

void KeyboardWidget::setInitialSettings()
{
    setFixedSize(FIXED_W, FIXED_H);
    setWindowFlags(Qt::WindowDoesNotAcceptFocus |
                   Qt::Tool | Qt::FramelessWindowHint |
                   Qt::WindowStaysOnTopHint);
}
