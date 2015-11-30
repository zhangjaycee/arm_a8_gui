#ifndef MYDLG5_H
#define MYDLG5_H

#include <QDialog>
#include "dialogct.h"


namespace Ui {
    class myDlg5;
}

class myDlg5 : public QDialog
{
    Q_OBJECT

public:
    explicit myDlg5(QWidget *parent = 0);
    ~myDlg5();

private:
    Ui::myDlg5 *ui;
    DialogCt ctw;
private slots:
   // void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // MYDLG5_H
