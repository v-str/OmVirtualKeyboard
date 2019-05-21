#include "specialsymbols.h"
#include "ui_specialsymbols.h"

SpecialSymbols::SpecialSymbols(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::SpecialSymbols)
{
    ui->setupUi(this);
}

SpecialSymbols::~SpecialSymbols()
{
    delete ui;
}
