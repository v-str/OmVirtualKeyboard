#ifndef CMD_LINE_ARGUMENTS_PROCESSOR_H
#define CMD_LINE_ARGUMENTS_PROCESSOR_H

#include <QApplication>
#include <QScopedPointer>
#include <QCommandLineParser>

#include <omvirtualkeyboard.h>

class QCommandLineParser;

class CmdLineArgumentsProcessor
{
public:
    CmdLineArgumentsProcessor(QApplication * pApp, OmVirtualKeyboard * pVkbd);

private:
    void composeOptions();

    QScopedPointer<QCommandLineParser> p_cmdParser;

    QApplication * p_app = Q_NULLPTR;
    OmVirtualKeyboard * p_vkbd = Q_NULLPTR;
};

#endif // CMD_LINE_ARGUMENTS_PROCESSOR_H
