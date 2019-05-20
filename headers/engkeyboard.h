#ifndef ENG_KEYBOARD_H
#define ENG_KEYBOARD_H

#include <QFrame>

namespace Ui {
class EngKeyboard;
}

class EngKeyboard : public QFrame
{
    Q_OBJECT

public:
    explicit EngKeyboard(QWidget *parent = Q_NULLPTR);
    ~EngKeyboard();

private:
    Ui::EngKeyboard *ui = Q_NULLPTR;
};

#endif // ENG_KEYBOARD_H
