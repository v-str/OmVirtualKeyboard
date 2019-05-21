#ifndef DIGITS_FRAME_H
#define DIGITS_FRAME_H

#include <QFrame>

#include <QList>
#include <QString>

#include "keyboardsymbols.h"

class QPushButton;

namespace Ui {
class DigitsFrame;
}

class DigitsFrame : public QFrame
{
    Q_OBJECT

public:
    explicit DigitsFrame(QWidget *parent = Q_NULLPTR);
    ~DigitsFrame();

public slots:
    void switchTo();

private slots:
    void digitPressed(const QString & text);

private:
    void setInitialSetting();

    Ui::DigitsFrame *ui = Q_NULLPTR;

    QList<QPushButton*> m_englishSpecialSymbols;
    QList<QPushButton*> m_russianSpecialSymbols;
    QList<QPushButton*> m_digits;
    QList<QPushButton*> m_buttons;
};

#endif // DIGITS_FRAME_H
