#ifndef KEYBOARD_WIDGET_H
#define KEYBOARD_WIDGET_H

#include <QWidget>

class EngKeyboard;

namespace Ui {
class KeyboardWidget;
}

class KeyboardWidget : public QWidget
{
    Q_OBJECT

public:
    explicit KeyboardWidget(QWidget *parent = Q_NULLPTR);
    ~KeyboardWidget();

private:
    void setInitialSettings();
    void setDefaultKeyboard();

    Ui::KeyboardWidget *ui = Q_NULLPTR;
    EngKeyboard * m_pEngKeyboard = Q_NULLPTR;
};

#endif // KEYBOARD_WIDGET_H
