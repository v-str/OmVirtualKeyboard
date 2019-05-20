#ifndef KEYBOARD_WIDGET_H
#define KEYBOARD_WIDGET_H

#include <QWidget>

class KeyboardWidget : public QWidget
{
    Q_OBJECT

public:
    explicit KeyboardWidget(QWidget *parent = nullptr);
    ~KeyboardWidget();

private:
    void setInitialSettings();
    void setDefaultKeyboardLayout();
};

#endif // KEYBOARD_WIDGET_H
