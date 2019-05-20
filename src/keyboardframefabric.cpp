#include "keyboardframefabric.h"

#include <QFrame>

KeyboardFrameFabric::KeyboardFrameFabric(QObject * parent)
    : QObject(parent)
{

}

QFrame *KeyboardFrameFabric::getFrame(QWidget *parent)
{
    Q_UNUSED(parent);
    return Q_NULLPTR;
}
