#include "keyboardwidget.h"
#include "ui_keyboardwidget.h"

#include <QFrame>
#include <QVBoxLayout>

#include "engkeyboard.h"
#include "digitsframe.h"

static constexpr short keyboard_width = 550;
static constexpr short keyboard_height = 200;

KeyboardWidget::KeyboardWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KeyboardWidget)
{
    setInitialSettings();
    setDefaultKeyboard();
}

KeyboardWidget::~KeyboardWidget()
{
    delete ui;
}

void KeyboardWidget::setInitialSettings()
{
    ui->setupUi(this);
    setWindowFlags(Qt::WindowDoesNotAcceptFocus |
                   Qt::Tool |
                   Qt::FramelessWindowHint |
                   Qt::WindowStaysOnTopHint);
    setFixedSize(keyboard_width, keyboard_height);
}

void KeyboardWidget::setDefaultKeyboard()
{
    QVBoxLayout * pVLayout = new QVBoxLayout;
    m_pDigitsFrame = new DigitsFrame;
    m_pEngKeyboard = new EngKeyboard;

    pVLayout->addWidget(m_pDigitsFrame);
    pVLayout->addWidget(m_pEngKeyboard);

    pVLayout->setContentsMargins(1,1,1,1);
    pVLayout->setSpacing(2);
    pVLayout->setSizeConstraint(QLayout::SetMinimumSize);

    setLayout(pVLayout);
}
