#include "mainwindow.h"
#include <QApplication>
#include "qnode.h"
int main(int argc, char *argv[])
{
    QApplication a(argc,argv);
    MainWindow w(argc,argv);
    w.show();
    return a.exec();
}
