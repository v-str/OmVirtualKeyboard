#include "keyboardwidget.h"

#include <QFrame>
#include <QVBoxLayout>

#include "globalstylesheetsetter.h"
#include "keyboardframefabric.h"

static constexpr unsigned short fixed_w = 500;
static constexpr unsigned short fixed_h = 230;

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
    setFixedSize(fixed_w, fixed_h);
    setWindowFlags(Qt::WindowDoesNotAcceptFocus |
                   Qt::Tool | Qt::FramelessWindowHint |
                   Qt::WindowStaysOnTopHint);
    setStyleSheet(GlobalStylesheetSetter::getKeyboardWidgetStylesheet());
}

void KeyboardWidget::setDefaultKeyboardLayout()
{
    QFrame * pLayoutFrame = m_KeyboardFabric->getFrame(English);
    QVBoxLayout * pVLayout = new QVBoxLayout();
    pVLayout->setSpacing(1);
    pVLayout->setMargin(1);
    pVLayout->addWidget(pLayoutFrame);
    setLayout(pVLayout);
}
