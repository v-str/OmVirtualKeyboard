#ifndef CMD_LINE_ARGUMENTS_PROCESSOR_H
#define CMD_LINE_ARGUMENTS_PROCESSOR_H

#include <QApplication>
#include <QScopedPointer>
#include <QCommandLineParser>
#include <QCommandLineOption>

#include <omvirtualkeyboard.h>

class QCommandLineParser;

class CmdLineArgumentsProcessor
{
public:
    explicit CmdLineArgumentsProcessor(QApplication * pApp);

    QString getPosition() const;

private:
    void composeOptions();

    QApplication * p_app = Q_NULLPTR;
    OmVirtualKeyboard * p_vkbd = Q_NULLPTR;

    QScopedPointer<QCommandLineParser> p_cmdParser;
    QScopedPointer<QCommandLineOption> m_positionOption;
    QScopedPointer<QCommandLineOption> m_theme;
};

#endif // CMD_LINE_ARGUMENTS_PROCESSOR_H
