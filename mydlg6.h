#ifndef MYDLG6_H
#define MYDLG6_H

#include <QDialog>

namespace Ui {
    class myDlg6;
}

class myDlg6 : public QDialog
{
    Q_OBJECT

public:
    explicit myDlg6(QWidget *parent = 0);
    ~myDlg6();

private:
    Ui::myDlg6 *ui;
};

#endif // MYDLG6_H
