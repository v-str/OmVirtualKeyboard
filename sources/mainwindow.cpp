#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "virtualkeyboard.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    p_vkbd = new VirtualKeyboard(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
