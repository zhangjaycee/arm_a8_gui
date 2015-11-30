#include "mydlg4.h"
#include "ui_mydlg4.h"

myDlg4::myDlg4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myDlg4)
{
    ui->setupUi(this);
}

myDlg4::~myDlg4()
{
    delete ui;
}

void myDlg4::on_pushButton_clicked()
{
   my6.show();
}

void myDlg4::on_pushButton_2_clicked()
{
    my7.show();
}

void myDlg4::on_pushButton_3_clicked()
{
   my9.show();
}

void myDlg4::on_pushButton_4_clicked()
{
    my10.show();
}
