#include "keyboardwidget.h"
#include "ui_keyboardwidget.h"

#include <QFrame>
#include <QVBoxLayout>

#include "engkeyboard.h"
#include "digitsframe.h"

static constexpr short keyboard_width = 520;
static constexpr short keyboard_height = 180;

KeyboardWidget::KeyboardWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KeyboardWidget)
{
    setInitialSettings();
    setDefaultKeyboard();
    setConnections();
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
    pVLayout->setContentsMargins(2,2,2,2);

    setLayout(pVLayout);
}

void KeyboardWidget::setConnections()
{
    connect(m_pEngKeyboard, &EngKeyboard::capsKeyPressed,m_pDigitsFrame,
            [&](){
        DigitsFrameType frameType = m_pDigitsFrame->getFrameType();
        if (frameType != Digits){
            m_pDigitsFrame->setFrameType(Digits);
        } else {
            m_pDigitsFrame->setFrameType(EngSpecialSymbols);
        }

        m_pDigitsFrame->switchFrame();

    });


}
