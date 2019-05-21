#ifndef SPECIAL_SYMBOLS_H
#define SPECIAL_SYMBOLS_H

#include <QList>
#include <QString>

class SpecialSymbols
{
public:

    static QList<QString> getDigits();

    static QList<QString> getEnglishSpecialSymbols();
    static QList<QString> getRussianSpecialSymbols();

};

#endif // SPECIAL_SYMBOLS_H
