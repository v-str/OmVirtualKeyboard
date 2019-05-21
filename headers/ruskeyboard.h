#ifndef RUSKEYBOARD_H
#define RUSKEYBOARD_H

#include <QFrame>

#include <QPushButton>
#include <QList>

namespace Ui {
class RusKeyboard;
}

class RusKeyboard : public QFrame
{
    Q_OBJECT

public:
    explicit RusKeyboard(QWidget *parent = Q_NULLPTR);
    ~RusKeyboard();

signals:
    void charKeyPressed(const QString & text);
    void capsKeyPressed();
    void switchLangPressed();

private slots:
    void keyPressed(const QString & text);
    void invertCaps();

private:
    void setButtonList();
    void setConnections();

    void invertLetters();
    void invertAlphabetEnding();

    Ui::RusKeyboard *ui = Q_NULLPTR;

    QList<QPushButton*> m_buttonList;
    bool m_isUpper = false;
};

#endif // RUSKEYBOARD_H
