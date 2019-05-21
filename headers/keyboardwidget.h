#ifndef KEYBOARD_WIDGET_H
#define KEYBOARD_WIDGET_H

#include <QWidget>

class EngKeyboard;
class RusKeyboard;
class DigitsFrame;
class QVBoxLayout;

namespace Ui {
class KeyboardWidget;
}

class KeyboardWidget : public QWidget
{
    Q_OBJECT

public:
    explicit KeyboardWidget(QWidget *parent = Q_NULLPTR);
    ~KeyboardWidget();

private slots:
    void switchKeyboard();

private:
    void setInitialSettings();
    void setDefaultKeyboard();
    void setConnections();

    Ui::KeyboardWidget *ui = Q_NULLPTR;

    QVBoxLayout * m_pVLayout = Q_NULLPTR;
    EngKeyboard * m_pEngKeyboard = Q_NULLPTR;
    RusKeyboard * m_pRusKeyboard = Q_NULLPTR;
    DigitsFrame * m_pDigitsFrame = Q_NULLPTR;

    bool m_isEngKeyboardActive = true;
};

#endif // KEYBOARD_WIDGET_H
