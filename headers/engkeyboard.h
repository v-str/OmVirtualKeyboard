#ifndef ENG_KEYBOARD_H
#define ENG_KEYBOARD_H

#include <QFrame>

#include <QPushButton>
#include <QList>

enum KeyType {
    CHAR = 1,
    CAPS = 4,
    SPACE = 5
};

namespace Ui {
class EngKeyboard;
}

class EngKeyboard : public QFrame
{
    Q_OBJECT

public:
    explicit EngKeyboard(QWidget *parent = Q_NULLPTR);
    ~EngKeyboard();

signals:
    void charKeyPressed(const QString & text);
    void capsKeyPressed();
    void spaceKeyPressed();

private slots:
    void keyPressed(const QString & text);

private:
    void setButtonList();
    void setConnections();

    Ui::EngKeyboard *ui = Q_NULLPTR;

    QList<QPushButton*> m_buttonList;
};

#endif // ENG_KEYBOARD_H
