#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "ros/ros.h"
#include "ui_mainwindow.h"
#include "std_msgs/Int32.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(int,char **,QWidget *parent = 0);
    ~MainWindow();
    void change_display(int);
    static void callback(const std_msgs::Int32::ConstPtr& msg);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
