#ifndef MYDLG9_H
#define MYDLG9_H

#include <QDialog>

namespace Ui {
    class myDlg9;
}

class myDlg9 : public QDialog
{
    Q_OBJECT

public:
    explicit myDlg9(QWidget *parent = 0);
    ~myDlg9();

private:
    Ui::myDlg9 *ui;
};

#endif // MYDLG9_H
