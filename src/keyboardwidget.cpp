#include "keyboardwidget.h"

#include <QFrame>
#include <QVBoxLayout>

#include "globalstylesheetsetter.h"
#include "keyboardframefabric.h"

#define FIXED_W     700
#define FIXED_H     300

KeyboardWidget::KeyboardWidget(QWidget *parent) :
    QWidget(parent),
    m_KeyboardFabric(new KeyboardFrameFabric(parent))
{
    setInitialSettings();
    setDefaultKeyboardLayout();
}

KeyboardWidget::~KeyboardWidget()
{
}

void KeyboardWidget::setInitialSettings()
{
    setFixedSize(FIXED_W, FIXED_H);
    setWindowFlags(Qt::WindowDoesNotAcceptFocus |
                   Qt::Tool | Qt::FramelessWindowHint |
                   Qt::WindowStaysOnTopHint);
    setStyleSheet(GlobalStylesheetSetter::getKeyboardWidgetStylesheet());
}

void KeyboardWidget::setDefaultKeyboardLayout()
{
    QFrame * pLayoutFrame = m_KeyboardFabric->getFrame(English);
    QVBoxLayout * pVLayout = new QVBoxLayout();
    pVLayout->addWidget(pLayoutFrame);
    setLayout(pVLayout);
}
