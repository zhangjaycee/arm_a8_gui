#include "mydlg6.h"
#include "ui_mydlg6.h"

myDlg6::myDlg6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myDlg6)
{
    ui->setupUi(this);
}

myDlg6::~myDlg6()
{
    delete ui;
}
