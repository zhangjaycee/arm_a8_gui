#include "mydlg10.h"
#include "ui_mydlg10.h"

myDlg10::myDlg10(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myDlg10)
{
    ui->setupUi(this);
}

myDlg10::~myDlg10()
{
    delete ui;
}
