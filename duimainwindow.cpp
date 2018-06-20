#include "duimainwindow.h"
#include "ui_duimainwindow.h"
#include "wpnglineedit.h"
DuiMainWindow::DuiMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DuiMainWindow)
{
    ui->setupUi(this);
    Init();
}


DuiMainWindow::~DuiMainWindow()
{
    delete ui;
}
void DuiMainWindow::Init(){

    ui->centralwidget->setFixedSize(1910,1080);
    new WPngLineEdit("", ui->LEdUsr,"lguser.png");
    new WPngLineEdit("", ui->LEdPw,"lgpassword.png");

    QLineEdit *pleSer =new QLineEdit();
    new WPngLineEdit("",pleSer,"lgserver.png");
    ui->CbbSer->setLineEdit(pleSer);
    ui->CbbSer->setEditable(true);

    QLineEdit *pleconct =new QLineEdit();
    new WPngLineEdit("",pleconct,"lgconct.png");
    ui->CbbConType->setLineEdit(pleconct);
    ui->CbbConType->setEditable(true);

}
