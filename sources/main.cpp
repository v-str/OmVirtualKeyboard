#include <QApplication>

#include <omvirtualkeyboard.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    OmVirtualKeyboard vkdb;
    vkdb.show();

    return a.exec();
}
