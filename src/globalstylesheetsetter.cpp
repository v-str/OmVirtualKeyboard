#include "globalstylesheetsetter.h"

QString GlobalStylesheetSetter::getKeyboardWidgetStylesheet()
{
    static QString stylesheet = "QWidget {"
                         "background-color: #242423;"
                         "}";

    return stylesheet;
}
