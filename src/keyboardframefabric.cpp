#include "keyboardframefabric.h"

#include <QFrame>
#include <QHBoxLayout>

KeyboardFrameFabric::KeyboardFrameFabric(QObject * parent)
    : QObject(parent),
      m_layout(new KeyboardLayout())
{

}

QFrame *KeyboardFrameFabric::getFrame(QWidget *parent, Layout layout)
{
    Q_UNUSED(layout);

    QFrame * pFrame = new QFrame(parent);

    switch (layout) {
    case English:
        fillFrame(m_layout->getEnglishLayout(), pFrame);
        break;
    default:
        break;
    }


    return Q_NULLPTR;
}

void KeyboardFrameFabric::fillFrame(const Keys &keys, QFrame *pFrame)
{
    Q_UNUSED(keys);
    Q_UNUSED(pFrame);
}
