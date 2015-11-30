#include "mydlg5.h"
#include "ui_mydlg5.h"

//////by jc
#include "define.h"
#include "dialogct.h"
#include "handfinder.h"
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
    mode = 2;
    ctw.boxInit();
}
//////by jc

void myDlg5::on_pushButton_clicked()
{
    ctw.show();
    mode = 1;
    first_flag = 1;
    gotHand = 0;
}
