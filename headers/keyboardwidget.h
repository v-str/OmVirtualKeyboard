#ifndef KEYBOARD_WIDGET_H
#define KEYBOARD_WIDGET_H

#include <QWidget>
#include <QString>

#include <digitsframe.h>
#include "keyboardsymbols.h"

class BaseKeyboard;
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

signals:
    void keyPressed(const QString & keyText);

private slots:
    void switchKeyboard();
    void switchDigitsFrame(DigitsFrameType digitsFrameType);
    void keyboardCharKeyPressed(const QString & keyText);

private:
    void setInitialSettings();
    void setDefaultKeyboard();
    void setConnections();

    Ui::KeyboardWidget *ui = Q_NULLPTR;

    QVBoxLayout * m_pVLayout = Q_NULLPTR;
    BaseKeyboard * m_pEngKeyboard = Q_NULLPTR;
    BaseKeyboard * m_pRusKeyboard = Q_NULLPTR;
    DigitsFrame * m_pDigitsFrame = Q_NULLPTR;
};

#endif // KEYBOARD_WIDGET_H
