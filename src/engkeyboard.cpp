#include "engkeyboard.h"
#include "ui_engkeyboard.h"

EngKeyboard::EngKeyboard(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::EngKeyboard)
{
    ui->setupUi(this);
}

EngKeyboard::~EngKeyboard()
{
    delete ui;
}
