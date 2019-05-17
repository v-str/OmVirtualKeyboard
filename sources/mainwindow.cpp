#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "virtualkeyboard.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    p_vkbd(new VirtualKeyboard(parent))
{
    setInitialSetting();
    setConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::processVkbdButton()
{
    p_vkbd->show();
}

void MainWindow::setInitialSetting()
{
    ui->setupUi(this);
}

void MainWindow::setConnections()
{
    connect(ui->vkbdBtn, SIGNAL(clicked(bool)), SLOT(processVkbdButton()));
}
