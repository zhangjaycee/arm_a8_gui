#ifndef MYDLG2_H
#define MYDLG2_H

#include <QDialog>

namespace Ui {
    class myDlg2;
}

class myDlg2 : public QDialog
{
    Q_OBJECT

public:
    explicit myDlg2(QWidget *parent = 0);
    ~myDlg2();

private:
    Ui::myDlg2 *ui;
};

#endif // MYDLG2_H
