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

void DigitsFrame::switchTo()
{
        // ENUM как поле класса
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
}
