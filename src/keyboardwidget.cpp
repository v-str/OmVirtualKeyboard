#include "keyboardwidget.h"

#include <QVBoxLayout>

#include "globalstylesheetsetter.h"

#define FIXED_W     700
#define FIXED_H     300

KeyboardWidget::KeyboardWidget(QWidget *parent) :
    QWidget(parent)
{
    setInitialSettings();
    setDefaultKeyboardLayout();
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
    setStyleSheet(GlobalStylesheetSetter::getKeyboardWidgetStylesheet());
}

void KeyboardWidget::setDefaultKeyboardLayout()
{

}
