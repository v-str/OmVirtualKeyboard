#include "ruskeyboard.h"
#include "ui_ruskeyboard.h"

#include <QDebug>

#include "keyboardsymbols.h"

RusKeyboard::RusKeyboard(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::RusKeyboard)
{
    ui->setupUi(this);
}

RusKeyboard::~RusKeyboard()
{
    delete ui;
}

void RusKeyboard::keyPressed(const QString &text)
{
    qDebug() << text;
}

void RusKeyboard::invertCaps()
{

}

void RusKeyboard::setButtonList()
{

}

void RusKeyboard::setConnections()
{

}

void RusKeyboard::invertLetters()
{

}

void RusKeyboard::invertAlphabetEnding()
{

}
