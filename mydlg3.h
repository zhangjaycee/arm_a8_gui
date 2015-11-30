#ifndef MYDLG3_H
#define MYDLG3_H

#include <QDialog>

#include"mydlg4.h"
#include "mydlg5.h"

namespace Ui {
    class myDlg3;
}

class myDlg3 : public QDialog
{
    Q_OBJECT

public:
    explicit myDlg3(QWidget *parent = 0);
    ~myDlg3();

private:
    Ui::myDlg3 *ui;
    myDlg4 my4;
    myDlg5 my5;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // MYDLG3_H
