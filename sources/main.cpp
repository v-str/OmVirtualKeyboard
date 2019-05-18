#include <QApplication>

#include <virtualkeyboard.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    VirtualKeyboard vkbd;
    vkbd.show();

    return a.exec();
}
