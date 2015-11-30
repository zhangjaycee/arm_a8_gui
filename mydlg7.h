#ifndef MYDLG7_H
#define MYDLG7_H

#include <QDialog>
#include "mydlg8.h"

namespace Ui {
    class myDlg7;
}

class myDlg7 : public QDialog
{
    Q_OBJECT

public:
    explicit myDlg7(QWidget *parent = 0);
    ~myDlg7();

private:
    Ui::myDlg7 *ui;
    myDlg8 my8;

private slots:
    void on_pushButton_clicked();
};

#endif // MYDLG7_H
