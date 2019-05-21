#ifndef ENG_KEYBOARD_H
#define ENG_KEYBOARD_H

#include <QFrame>

#include <QPushButton>
#include <QList>

enum KeyType {
    CHAR = 1,
    CAPS = 4,
    ENG = 3
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
    void swapDigitsToSpecialCharacters();
    void switchLangPressed();

private slots:
    void keyPressed(const QString & text);
    void invertCaps();

private:
    void setButtonList();
    void setConnections();

    void invertLetters();
    void invertAlphabetEnding();

    Ui::EngKeyboard *ui = Q_NULLPTR;

    QList<QPushButton*> m_buttonList;
    bool m_isUpper = false;
};

#endif // ENG_KEYBOARD_H
