#include "engkeyboard.h"
#include "ui_engkeyboard.h"

#include <QDebug>

#include "keyboardsymbols.h"

static constexpr int lastNonAlphabetSymbolsCount = 3;

EngKeyboard::EngKeyboard(QWidget *parent) :
    BaseKeyboard(parent),
    ui(new Ui::EngKeyboard)
{
    ui->setupUi(this);
}

EngKeyboard::~EngKeyboard()
{
    delete ui;
}


