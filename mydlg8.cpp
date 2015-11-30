#include "mydlg8.h"
#include "ui_mydlg8.h"

myDlg8::myDlg8(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myDlg8)
{
    ui->setupUi(this);
}

myDlg8::~myDlg8()
{
    delete ui;
}
