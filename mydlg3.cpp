#include "mydlg3.h"
#include "ui_mydlg3.h"

myDlg3::myDlg3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myDlg3)
{
    ui->setupUi(this);
}

myDlg3::~myDlg3()
{
    delete ui;
}

void myDlg3::on_pushButton_clicked()
{
   my4.show();
}

void myDlg3::on_pushButton_2_clicked()
{
    my5.show();
}
