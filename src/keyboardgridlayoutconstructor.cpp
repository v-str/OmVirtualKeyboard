#include "keyboardgridlayoutconstructor.h"

#include <QWidget>
#include <QPushButton>
#include <QGridLayout>

#define restricted_width    40
#define restricted_height   40

KeyboardGridLayoutConstructor::KeyboardGridLayoutConstructor(QObject *parent)
    : QObject(parent)
{
    constructDefaultKeysArray();
}

void KeyboardGridLayoutConstructor::prepareGridLayout(QWidget *mainWidget)
{
    m_pGridLayout = new QGridLayout(mainWidget);

    for (auto i = 0; i < m_keySet.size(); ++i){
        QPushButton * keyButton = new QPushButton();

        keyButton->setFixedSize(restricted_width,restricted_height);
        keyButton->setText(m_keySet.at(i).second);

        connect(keyButton, &QPushButton::clicked, [=] () {
           keyButtonClicked(m_keySet.at(i).second);
        });

        m_pGridLayout->addWidget(keyButton, 0, 0);
    }
}

QGridLayout *KeyboardGridLayoutConstructor::gridLayout()
{
    return m_pGridLayout;
}

void KeyboardGridLayoutConstructor::keyButtonClicked(const QString &text)
{
    emit keyClicked(text);
}

void KeyboardGridLayoutConstructor::constructDefaultKeysArray()
{
    m_keySet.push_back({Qt::Key_0, '0'});
    m_keySet.push_back({Qt::Key_1, '1'});
    m_keySet.push_back({Qt::Key_2, '2'});
    m_keySet.push_back({Qt::Key_3, '3'});
    m_keySet.push_back({Qt::Key_4, '4'});
    m_keySet.push_back({Qt::Key_5, '5'});
    m_keySet.push_back({Qt::Key_6, '6'});
    m_keySet.push_back({Qt::Key_7, '7'});
    m_keySet.push_back({Qt::Key_8, '8'});
    m_keySet.push_back({Qt::Key_9, '9'});
}
