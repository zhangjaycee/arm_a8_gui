#include "mydlg2.h"
#include "ui_mydlg2.h"

myDlg2::myDlg2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myDlg2)
{
    ui->setupUi(this);
}

myDlg2::~myDlg2()
{
    delete ui;
}
