#include "virtualkeyboard.h"
#include "ui_virtualkeyboard.h"

VirtualKeyboard::VirtualKeyboard(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::VirtualKeyboard)
{
    ui->setupUi(this);
}

VirtualKeyboard::~VirtualKeyboard()
{
    delete ui;
}
