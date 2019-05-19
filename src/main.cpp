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

    QString position = pCmdLineArgsParser->getPosition();
    //QString theme = pCmdLineArgsParser->getTheme();

    qDebug() << position;

    OmVirtualKeyboard vkdb;
    vkdb.showKeyboard(/*pCmdLineArgsParser->position,
                      pCmdLineArgsParser->theme*/);

    return application.exec();
}

