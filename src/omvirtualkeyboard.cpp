#include "omvirtualkeyboard.h"
#include "ui_omvirtualkeyboard.h"

#include <QDebug>
#include <QSizePolicy>
#include <QApplication>
#include <QResizeEvent>
#include <QDesktopWidget>

#define APP_NAME    "omvkbd"
#define WIDTH       650
#define HEIGHT      255
#define MAGIC       100

OmVirtualKeyboard::OmVirtualKeyboard(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::OmVirtualKeyboard)
{
    setInitialSetting();
    setConnections();
}

OmVirtualKeyboard::~OmVirtualKeyboard()
{
    delete ui;
}

void OmVirtualKeyboard::showKeyboard()
{
    QRect desktopGeometry = QApplication::desktop()->geometry();
    short desktopWidth = desktopGeometry.width();
    short desktopHeigh = desktopGeometry.height();

    short x = (desktopWidth / 2) - (geometry().width() / 2);
    short y = desktopHeigh - geometry().height() - MAGIC;

    move(x,y);

    show();
}

void OmVirtualKeyboard::resizeEvent(QResizeEvent *event)
{
    event->ignore();
    QFrame::resizeEvent(event);
}

void OmVirtualKeyboard::setInitialSetting()
{
    ui->setupUi(this);
    setWindowTitle(APP_NAME);
    setWindowFlags(Qt::WindowDoesNotAcceptFocus | Qt::Tool |
                   Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    setFixedSize(650,255);
}

void OmVirtualKeyboard::setConnections()
{
    connect(ui->_escapeBtn, SIGNAL(clicked()), this, SLOT(quitProgramm()));
}

void OmVirtualKeyboard::quitProgramm()
{
    QApplication::quit();
}
