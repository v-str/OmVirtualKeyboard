#include <QApplication>
#include <QCoreApplication>

#include <QScopedPointer>

#include <omvirtualkeyboard.h>
#include <cmdlineargumentprocessor.h>

int main(int argc, char **argv)
{
    QApplication application(argc, argv);

    OmVirtualKeyboard vkdb;

    QScopedPointer<CmdLineArgumentsProcessor> pCmdLineArgsParser(
                new CmdLineArgumentsProcessor(&application, &vkdb));

    vkdb.showKeyboard();

    return application.exec();
}

