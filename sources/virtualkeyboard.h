#ifndef VIRTUAL_KEYBOARD_H
#define VIRTUAL_KEYBOARD_H

#include <QFrame>

namespace Ui {
class VirtualKeyboard;
}

class VirtualKeyboard : public QFrame
{
    Q_OBJECT

public:
    explicit VirtualKeyboard(QWidget *parent = nullptr);
    ~VirtualKeyboard();

private:
    void setInitialSetting();

    Ui::VirtualKeyboard *ui = nullptr;
};

#endif // VIRTUAL_KEYBOARD_H
