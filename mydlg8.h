#ifndef MYDLG8_H
#define MYDLG8_H

#include <QDialog>

namespace Ui {
    class myDlg8;
}

class myDlg8 : public QDialog
{
    Q_OBJECT

public:
    explicit myDlg8(QWidget *parent = 0);
    ~myDlg8();

private:
    Ui::myDlg8 *ui;
};

#endif // MYDLG8_H
