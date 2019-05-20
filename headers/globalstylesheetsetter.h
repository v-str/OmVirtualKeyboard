#ifndef GLOBAL_STYLESHEET_SETTER_H
#define GLOBAL_STYLESHEET_SETTER_H

#include <QString>

class GlobalStylesheetSetter
{
public:
    GlobalStylesheetSetter() = default;
    ~GlobalStylesheetSetter() = default;

    static QString getKeyboardWidgetStylesheet();

};

#endif // GLOBAL_STYLESHEET_SETTER_H
