#include <QApplication>
#include <QScopedPointer>
#include <QCoreApplication>

#include <omvirtualkeyboard.h>
#include <cmdlineargumentprocessor.h>

#include <QDebug>

int main(int argc, char **argv)
{
    QApplication application(argc, argv);

    QScopedPointer<CmdLineArgumentsProcessor> pCmdLineArgsParser(
                new CmdLineArgumentsProcessor(&application));

    OmVirtualKeyboard vkdb;
    vkdb.showKeyboard();

    return application.exec();
}

