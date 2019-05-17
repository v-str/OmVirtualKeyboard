#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class VirtualKeyboard;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui = nullptr;
    VirtualKeyboard * p_vkbd = nullptr;
};

#endif // MAINWINDOW_H
