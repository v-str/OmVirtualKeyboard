#include <QApplication>
#include <QDBusConnection>
#include <QCoreApplication>

#include <omvirtualkeyboard.h>

#include <QDebug>

int main(int argc, char **argv)
{
    QApplication application(argc, argv);

    if (!QDBusConnection::sessionBus().registerService("omvkbd.inputmethod")) {
        qFatal("Unable to register service at DBus");
        return 1;
    }

    OmVirtualKeyboard vkbd;

    bool isRegistrationOk =
            QDBusConnection::sessionBus().registerObject(
                "/usr/local/bin/omvkbd",
                &vkbd,
                QDBusConnection::ExportAllSignals |
                QDBusConnection::ExportAllSlots);

    if (!isRegistrationOk) {
        qFatal("Unable to register object at DBus");
        return 1;
    }

    vkbd.show();

    return application.exec();
}

