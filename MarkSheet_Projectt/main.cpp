#include "mainwindow.h"
#include <QApplication>
#include "studentInfo.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow mainwin;
    mainwin.show();
    return a.exec();
}
