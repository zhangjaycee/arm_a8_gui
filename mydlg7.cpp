#include "mydlg7.h"
#include "ui_mydlg7.h"

myDlg7::myDlg7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myDlg7)
{
    ui->setupUi(this);
}

myDlg7::~myDlg7()
{
    delete ui;
}

void myDlg7::on_pushButton_clicked()
{
   my8.show();
}
