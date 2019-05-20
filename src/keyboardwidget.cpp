#include "keyboardwidget.h"
#include "ui_keyboardwidget.h"

KeyboardWidget::KeyboardWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KeyboardWidget)
{
    setInitialSettings();

}

KeyboardWidget::~KeyboardWidget()
{
    delete ui;
}

void KeyboardWidget::setInitialSettings()
{
    ui->setupUi(this);
    setWindowFlags(Qt::WindowDoesNotAcceptFocus |
                   Qt::Tool |
                   Qt::FramelessWindowHint |
                   Qt::WindowStaysOnTopHint);
}
