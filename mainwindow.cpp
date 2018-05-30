#include "mainwindow.h"
#include<QDesktopWidget>
#include <QApplication>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)

{

    //setStyleSheet("border-image:url(:/img/lgbackground.png);");
    setStyleSheet("QMainWindow{border-image: url(:/img/lgbackground.png)}");
    setFixedSize(1910,1080);
    QDesktopWidget* desktop = QApplication::desktop();
    move((desktop->width()-this->width())/2,(desktop->height()-this->height())/2);


}

MainWindow::~MainWindow()
{

}
void MainWindow::addLoginWidget(){
    QWidget* widget = new QWidget();
    widget->setFixedSize(400,200);
    //widget->set
    widget->setStyleSheet("QWidget{background:white}");
    setCentralWidget(widget);

}

