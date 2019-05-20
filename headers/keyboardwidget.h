#ifndef KEYBOARD_WIDGET_H
#define KEYBOARD_WIDGET_H

#include <QWidget>
#include <QScopedPointer>

class KeyboardFrameFabric;

class KeyboardWidget : public QWidget
{
    Q_OBJECT

public:
    explicit KeyboardWidget(QWidget *parent = nullptr);
    ~KeyboardWidget();

private:
    void setInitialSettings();
    void setDefaultKeyboardLayout();

    QScopedPointer<KeyboardFrameFabric> m_KeyboardFabric;
};

#endif // KEYBOARD_WIDGET_H
