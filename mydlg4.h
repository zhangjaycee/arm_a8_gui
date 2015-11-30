#ifndef MYDLG4_H
#define MYDLG4_H

#include <QDialog>
#include"mydlg6.h"
#include"mydlg7.h"
#include"mydlg9.h"
#include"mydlg10.h"

namespace Ui {
    class myDlg4;
}

class myDlg4 : public QDialog
{
    Q_OBJECT

public:
    explicit myDlg4(QWidget *parent = 0);
    ~myDlg4();

private:
    Ui::myDlg4 *ui;
    myDlg6 my6;
    myDlg7 my7;
    myDlg9 my9;
    myDlg10 my10;

private slots:
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // MYDLG4_H
