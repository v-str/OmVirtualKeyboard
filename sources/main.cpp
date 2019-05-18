#include <QApplication>
#include <QCoreApplication>
#include <QCommandLineParser>

#include <omvirtualkeyboard.h>

#define APP_NAME    "omvkbd"

void setAppSetting(QApplication *application);

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    setAppSetting(&application);




    OmVirtualKeyboard vkdb;
    vkdb.showKeyboard();

    return application.exec();
}

void setAppSetting(QApplication * application){
    application->setApplicationName(APP_NAME);
}
