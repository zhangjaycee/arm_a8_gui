#include "mydlg1.h"
#include "ui_mydlg1.h"

myDlg1::myDlg1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myDlg1)
{
    ui->setupUi(this);
}

myDlg1::~myDlg1()
{
    delete ui;
}

void myDlg1::on_pushButton_2_clicked()
{
    this->close();
}
