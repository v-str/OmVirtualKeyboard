#include "cmdlineargumentprocessor.h"

#include <QCommandLineParser>
#include <QCommandLineOption>

#define APP_NAME        "omvkbd"
#define APP_VERSION     "0.10"
#define APP_DESCRIPTION "omvkbd - virtual keyboard based on Qt library"

CmdLineArgumentsProcessor::CmdLineArgumentsProcessor(QApplication *pApp,
                                                     OmVirtualKeyboard *pVkbd)
    : p_cmdParser(new QCommandLineParser), p_app(pApp), p_vkbd(pVkbd)
{
    p_app->setApplicationName(APP_NAME);
    p_app->setApplicationVersion(APP_VERSION);

    composeOptions();

    p_cmdParser->process(*p_app);
}

void CmdLineArgumentsProcessor::composeOptions()
{
    p_cmdParser->setApplicationDescription(APP_DESCRIPTION);
    p_cmdParser->addHelpOption();
    p_cmdParser->addVersionOption();

    QCommandLineOption positionOption({"p", "position"},
                                      "Set position relative desktop screen",
                                      "", "100x100");
    p_cmdParser->addOption(positionOption);
}
