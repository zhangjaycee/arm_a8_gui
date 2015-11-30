#include "mydlg9.h"
#include "ui_mydlg9.h"

myDlg9::myDlg9(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myDlg9)
{
    ui->setupUi(this);
}

myDlg9::~myDlg9()
{
    delete ui;
}
