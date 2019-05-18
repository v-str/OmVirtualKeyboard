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
    explicit OmVirtualKeyboard(QWidget *parent = Q_NULLPTR);
    ~OmVirtualKeyboard();

    void showKeyboard();

protected:
    void resizeEvent(QResizeEvent *event);

private slots:
    void quitProgramm();

private:
    void setInitialSetting();
    void setConnections();

    Ui::OmVirtualKeyboard *ui = Q_NULLPTR;
};

#endif // OMVIRTUAL_KEYBOARD_H
