#ifndef MYDLG1_H
#define MYDLG1_H

#include <QDialog>

namespace Ui {
    class myDlg1;
}

class myDlg1 : public QDialog
{
    Q_OBJECT

public:
    explicit myDlg1(QWidget *parent = 0);
    ~myDlg1();

private:
    Ui::myDlg1 *ui;

private slots:
    void on_pushButton_2_clicked();
};

#endif // MYDLG1_H
