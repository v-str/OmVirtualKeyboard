#include <QApplication>
#include <QCoreApplication>

#include "keyboardwidget.h"

int main(int argc, char **argv)
{
    QApplication application(argc, argv);

    KeyboardWidget kWidget;
    kWidget.show();

    return application.exec();
}

