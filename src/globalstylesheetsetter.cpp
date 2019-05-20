#include "globalstylesheetsetter.h"

QString GlobalStylesheetSetter::getKeyboardWidgetStylesheet()
{
    static QString stylesheet = "QWidget {"
                         "background-color: #444444;"
                         "color: #C9C9C9;"
                         "}";

    return stylesheet;
}
