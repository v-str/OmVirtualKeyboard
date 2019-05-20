#include "keyboardframefabric.h"

#include <QFrame>
#include <QPushButton>
#include <QHBoxLayout>

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
    Q_UNUSED(keys);
    Q_UNUSED(pFrame);

    QPushButton * pButton = new QPushButton("test");
    QHBoxLayout * pHLayout = new QHBoxLayout;
    pHLayout->addWidget(pButton);
    pFrame->setLayout(pHLayout);
}
