#include "digitsframe.h"
#include "ui_digitsframe.h"

DigitsFrame::DigitsFrame(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::DigitsFrame)
{
    ui->setupUi(this);
}

DigitsFrame::~DigitsFrame()
{
    delete ui;
}
