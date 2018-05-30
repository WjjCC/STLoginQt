//#include "mainwindow.h"
#include <QApplication>
#include "duimainwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.addLoginWidget();
//    w.show();

    DuiMainWindow w;
    w.show();

    return a.exec();
}
