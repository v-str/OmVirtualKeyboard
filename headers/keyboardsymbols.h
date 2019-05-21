#ifndef KEYBOARD_SYMBOLS_H
#define KEYBOARD_SYMBOLS_H

#include <QList>
#include <QString>

enum DigitsFrameType{
    Digits,
    EngSpecialSymbols,
    RusSpecialSymbols
};

class KeyboardSymbols
{
public:

    static QList<QString> getDigits();

    static QList<QString> getEnglishSpecialSymbols();
    static QList<QString> getRussianSpecialSymbols();

};

#endif // KEYBOARD_SYMBOLS_H
