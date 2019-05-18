#include "omvirtualkeyboard.h"
#include "ui_omvirtualkeyboard.h"

#include <QApplication>

OmVirtualKeyboard::OmVirtualKeyboard(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::OmVirtualKeyboard)
{
    setInitialSetting();
}

OmVirtualKeyboard::~OmVirtualKeyboard()
{
    delete ui;
}

void OmVirtualKeyboard::setInitialSetting()
{
    ui->setupUi(this);
    setWindowTitle("Om Virtual Keyboard");
    setWindowFlags(Qt::WindowDoesNotAcceptFocus |Qt::Tool |
                   Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
}

void OmVirtualKeyboard::on__escapeBtn_clicked()
{
    QApplication::quit();
}
