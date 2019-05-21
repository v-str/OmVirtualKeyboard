#include "specialsymbols.h"

QList<QString> SpecialSymbols::getDigits()
{
    return {"1","2","3","4","5","6","7","8","9","0",};
}

QList<QString> SpecialSymbols::getEnglishSpecialSymbols()
{
    return {"!","@","#","$","%","^","&","*","(",")",};
}

QList<QString> SpecialSymbols::getRussianSpecialSymbols()
{
    return {"!","\"","№",";","%",":","?","*","(",")",};
}
