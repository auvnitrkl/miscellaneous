#include "mainwindow.h"


/**
 * This tutorial demonstrates simple receipt of messages over the ROS system.
 */

MainWindow::MainWindow(int argc,char **argv,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ros::init(argc, argv, "listener");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("numbers", 1000, &MainWindow::callback);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::change_display(int n)
{
    ui->lcd->display(n);
}

void MainWindow::callback(const std_msgs::Int32::ConstPtr& msg)
{
  ROS_INFO("I heard: [%d]", msg->data);
  ui->lcd->display(msg->data);
}
