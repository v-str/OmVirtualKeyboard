#include "engkeyboard.h"
#include "ui_engkeyboard.h"

#include <QDebug>

#include "keyboardsymbols.h"

static constexpr int lastNonAlphabetSymbolsCount = 3;

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

    if (text.length() == CHAR) {
        qDebug() << text << " char!";
        emit charKeyPressed(text);
    } else if (text.length() == CAPS){
        qDebug() << text << " caps!";
        emit capsKeyPressed();
    } else if (text.length() == LANG){
        qDebug() << text << " lang!";
        emit switchLangPressed();
    }
}

void EngKeyboard::setButtonList()
{
    m_buttonList = findChildren<QPushButton*>();
    m_isUpper = m_buttonList.at(0)->text().isUpper();
}

void EngKeyboard::setConnections()
{
    for(auto i = 0; i < m_buttonList.size(); ++i){
        connect(m_buttonList.at(i), &QPushButton::clicked, [=] {
            keyPressed(m_buttonList.at(i)->text());
        });
    }

    connect(this, SIGNAL(capsKeyPressed()), SLOT(invertCaps()));
}

void EngKeyboard::invertCaps()
{
    invertLetters();
    invertAlphabetEnding();
    m_isUpper = !m_isUpper;
}

void EngKeyboard::invertLetters()
{
    QString text;

    for(auto i = 0; i < m_buttonList.size(); ++i){
        if (m_buttonList.at(i)->text().length() == CHAR){
            if(m_isUpper){
                text = m_buttonList[i]->text().toLower();
                m_buttonList[i]->setText(text);
            } else {
                text = m_buttonList[i]->text().toUpper();
                m_buttonList[i]->setText(text);
            }
        }
    }
}

void EngKeyboard::invertAlphabetEnding()
{
    auto j = 0;
    auto i = m_buttonList.size() - lastNonAlphabetSymbolsCount;
    QList<QString> lastCapsSymbols = KeyboardSymbols::getCapsLastSymbols();
    QList<QString> lastNonCapsSymbols = KeyboardSymbols::getNonCapsLastSymbols();
    for (;i < m_buttonList.size(); ++i){
        if (m_isUpper){
            m_buttonList[i]->setText(lastNonCapsSymbols.at(j));
            ++j;
        } else {
            m_buttonList[i]->setText(lastCapsSymbols.at(j));
            ++j;
        }
    }
}


