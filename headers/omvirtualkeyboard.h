#ifndef OMVIRTUAL_KEYBOARD_H
#define OMVIRTUAL_KEYBOARD_H

#include <QFrame>

namespace Ui {
class OmVirtualKeyboard;
}

class OmVirtualKeyboard : public QFrame
{
    Q_OBJECT

public:
    explicit OmVirtualKeyboard(QWidget *parent = nullptr);
    ~OmVirtualKeyboard();

private slots:
    void on__escapeBtn_clicked();

private:
    void setInitialSetting();

    Ui::OmVirtualKeyboard *ui = nullptr;
};

#endif // OMVIRTUAL_KEYBOARD_H
