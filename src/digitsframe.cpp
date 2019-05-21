#include "digitsframe.h"
#include "ui_digitsframe.h"

#include <QDebug>
#include <QPushButton>

DigitsFrame::DigitsFrame(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::DigitsFrame)
{
    setInitialSetting();
}

DigitsFrame::~DigitsFrame()
{
    delete ui;
}

void DigitsFrame::setFrameType(DigitsFrameType frameType)
{
    m_digitsFrameType = frameType;
}

DigitsFrameType DigitsFrame::getFrameType() const
{
    return m_digitsFrameType;
}

void DigitsFrame::switchFrame()
{
    if (m_digitsFrameType == Digits){
        redrawKeys(KeyboardSymbols::getDigits());
    }
    if (m_digitsFrameType == EngSpecialSymbols){
        redrawKeys(KeyboardSymbols::getEnglishSpecialSymbols());
    }
    if (m_digitsFrameType == RusSpecialSymbols){
        redrawKeys(KeyboardSymbols::getRussianSpecialSymbols());
    }
}

void DigitsFrame::digitPressed(const QString &text)
{
    qDebug() << text << " clicked!";
}

void DigitsFrame::setInitialSetting()
{
    ui->setupUi(this);

    m_buttons = findChildren<QPushButton*> ();
    m_digits = findChildren<QPushButton*> ();
    m_digits.removeLast();

    for (auto i = 0; i < m_buttons.size(); ++i){
        connect(m_buttons.at(i),&QPushButton::clicked, [=](){
            digitPressed(m_buttons.at(i)->text());
        });
    }

    m_digitsFrameType = Digits;
}

void DigitsFrame::redrawKeys(const QList<QString> &keys)
{
    for(auto i = 0; i < keys.size(); ++i){
        m_digits[i]->setText(keys.at(i));
    }
}
