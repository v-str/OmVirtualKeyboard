#include <QApplication>
#include <QCoreApplication>

#include <QDebug>
#include <QStringList>
#include <QCommandLineParser>
#include <QCommandLineOption>

#include <omvirtualkeyboard.h>

#define APP_NAME        "omvkbd"
#define APP_VERSION     "0.10"
#define APP_DESCRIPTION "omvkbd - virtual keyboard"

void setAppSetting(QApplication *application);

int main(int argc, char **argv)
{
    QApplication application(argc, argv);
    setAppSetting(&application);

    QCommandLineParser cmdParser;
    cmdParser.setApplicationDescription(APP_DESCRIPTION);
    cmdParser.addHelpOption();
    cmdParser.addVersionOption();

    QCommandLineOption positionOption({"p", "position"},
                                "Set position relative desktop screen",
                                "",
                                "100x100");
    cmdParser.addOption(positionOption);


    cmdParser.process(application);

    QString positionString  = cmdParser.value(positionOption);
    qDebug() << positionString;

    OmVirtualKeyboard vkdb;
    vkdb.showKeyboard();

    return application.exec();
}

void setAppSetting(QApplication * application){
    application->setApplicationName(APP_NAME);
    application->setApplicationVersion(APP_VERSION);
}
