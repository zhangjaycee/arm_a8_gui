#include "mydlg5.h"
#include "ui_mydlg5.h"

//////by jc
#include "dialogct.h"
//////by jc
myDlg5::myDlg5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myDlg5)
{
    ui->setupUi(this);
}

myDlg5::~myDlg5()
{
    delete ui;
}



//////by jc
void myDlg5::on_pushButton_2_clicked()
{
    ctw.show();
}
//////by jc
