#include "engkeyboard.h"
#include "ui_engkeyboard.h"

#include <QDebug>

EngKeyboard::EngKeyboard(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::EngKeyboard)
{
    ui->setupUi(this);
    setButtonList();
    setConnections();
}

EngKeyboard::~EngKeyboard()
{
    delete ui;
}

void EngKeyboard::keyPressed(const QString &text)
{
    qDebug() << text << " clicked!";

    if (text.length() == CHAR) {
        emit charKeyPressed(text);
    } else if (text.length() == CAPS){
        emit swapDigitsToSpecialCharacters();
        emit capsKeyPressed();
    } else if (text.length() == ENG){
        emit switchLangPressed();
    }
}

void EngKeyboard::setButtonList()
{
    m_buttonList = findChildren<QPushButton*>();
}

void EngKeyboard::setConnections()
{
    for(auto i = 0; i < m_buttonList.size(); ++i){
        connect(m_buttonList.at(i), &QPushButton::clicked, [=] {
            keyPressed(m_buttonList.at(i)->text());
        });
    }
    connect(this, &EngKeyboard::capsKeyPressed, [&](){
        QString text;
        for(auto i = 0; i < m_buttonList.size(); ++i){
            if (m_buttonList.at(i)->text().length() == CHAR){
                if(m_buttonList.at(i)->text().isUpper()){
                    text = m_buttonList[i]->text().toLower();
                    m_buttonList[i]->setText(text);
                } else {
                    text = m_buttonList[i]->text().toUpper();
                    m_buttonList[i]->setText(text);
                }
            }
        }
    });
}




