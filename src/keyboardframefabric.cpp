#include "keyboardframefabric.h"

#include <QFrame>
#include <QString>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

static constexpr unsigned short button_w = 40;
static constexpr unsigned short button_h = 40;

static constexpr unsigned short numbers_count = 10;

KeyboardFrameFabric::KeyboardFrameFabric(QObject * parent)
    : QObject(parent),
      m_layout(new KeyboardLayout())
{

}

QFrame *KeyboardFrameFabric::getFrame(Layout layout)
{
    Q_UNUSED(layout);

    QFrame * pFrame = new QFrame();

    switch (layout) {
    case English:
        fillFrame(m_layout->getEnglishLayout(), pFrame);
        break;
    default:
        break;
    }


    return pFrame;
}

void KeyboardFrameFabric::fillFrame(const Keys &keys, QFrame *pFrame)
{
    QHBoxLayout * pHLayout = new QHBoxLayout;
    QVBoxLayout * pVLayout = new QVBoxLayout;

    for (int i = 0; i < keys.size(); ++i){

        QPushButton * pButton = new QPushButton;
        pButton->setFixedSize(button_w, button_h);

        if(i <= numbers_count){
            pButton->setText(QString(keys.at(i).second));
            pHLayout->addWidget(pButton);
        }
    }

    pVLayout->addLayout(pHLayout);
    pFrame->setLayout(pVLayout);
}
