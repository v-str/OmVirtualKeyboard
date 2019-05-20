#include "keyboardwidget.h"
#include "ui_keyboardwidget.h"

#include <QFrame>
#include <QVBoxLayout>

#include <engkeyboard.h>

KeyboardWidget::KeyboardWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KeyboardWidget)
{
    setInitialSettings();
    setDefaultKeyboard();
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

void KeyboardWidget::setDefaultKeyboard()
{
    QVBoxLayout * pVLayout = new QVBoxLayout;
    m_pEngKeyboard = new EngKeyboard;

    pVLayout->addWidget(m_pEngKeyboard);
    setLayout(pVLayout);
}
