#include "duimainwindow.h"
#include "ui_duimainwindow.h"

DuiMainWindow::DuiMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DuiMainWindow)
{
    ui->setupUi(this);
    ui->centralwidget->setFixedSize(1910,1080);
}


DuiMainWindow::~DuiMainWindow()
{
    delete ui;
}
