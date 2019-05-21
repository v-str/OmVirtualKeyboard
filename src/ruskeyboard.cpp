#include "ruskeyboard.h"
#include "ui_ruskeyboard.h"

#include <QDebug>

#include "keyboardsymbols.h"

RusKeyboard::RusKeyboard(QWidget *parent) :
    BaseKeyboard(parent),
    ui(new Ui::RusKeyboard)
{
    ui->setupUi(this);

    setButtonList(findChildren<QPushButton*>());
    setUpperState(false);
}

RusKeyboard::~RusKeyboard()
{
    delete ui;
}
