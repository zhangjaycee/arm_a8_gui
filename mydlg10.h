#ifndef MYDLG10_H
#define MYDLG10_H

#include <QDialog>

namespace Ui {
    class myDlg10;
}

class myDlg10 : public QDialog
{
    Q_OBJECT

public:
    explicit myDlg10(QWidget *parent = 0);
    ~myDlg10();

private:
    Ui::myDlg10 *ui;
};

#endif // MYDLG10_H
