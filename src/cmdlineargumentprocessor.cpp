#include "cmdlineargumentprocessor.h"

#include <QCommandLineParser>
#include <QCommandLineOption>

#include "appdefinitions.h"

CmdLineArgumentsProcessor::CmdLineArgumentsProcessor(QApplication *pApp)
    : p_app(pApp), p_cmdParser(new QCommandLineParser)
{
    p_app->setApplicationName(APP_NAME);
    p_app->setApplicationVersion(APP_VERSION);

    composeOptions();

    p_cmdParser->process(*p_app);
}

QString CmdLineArgumentsProcessor::getPosition() const
{
    return p_cmdParser->value(*m_positionOption.get());
}

void CmdLineArgumentsProcessor::composeOptions()
{
    p_cmdParser->setApplicationDescription(APP_DESCRIPTION);
    p_cmdParser->addHelpOption();
    p_cmdParser->addVersionOption();

    m_positionOption.reset(new QCommandLineOption({"p", "position"},
                                      "Set position relative desktop screen",
                                      "100x100", "100x100"));
    m_theme.reset(new QCommandLineOption({"t", "theme"},
                                         "Set dark/light theme", "dark", "dark"));

    p_cmdParser->addOption(*m_positionOption.get());
    p_cmdParser->addOption(*m_theme.get());
}
