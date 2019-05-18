#include "virtualkeyboard.h"
#include "ui_virtualkeyboard.h"

VirtualKeyboard::VirtualKeyboard(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::VirtualKeyboard)
{
    setInitialSetting();
}

VirtualKeyboard::~VirtualKeyboard()
{
    delete ui;
}

void VirtualKeyboard::setInitialSetting()
{
    ui->setupUi(this);
    setWindowTitle("Om Virtual Keyboard");
    setWindowFlags(Qt::FramelessWindowHint);
}
