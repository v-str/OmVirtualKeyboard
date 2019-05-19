#include "keyboardgridlayoutconstructor.h"

#include <QWidget>
#include <QGridLayout>

KeyboardGridLayoutConstructor::KeyboardGridLayoutConstructor(QObject *parent)
    : QObject(parent)
{

}

void KeyboardGridLayoutConstructor::prepareGridLayout(QWidget *mainWidget)
{
    m_pGridLayout = new QGridLayout(mainWidget);
}
