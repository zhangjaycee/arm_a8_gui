#ifndef DIALOGCT_H
#define DIALOGCT_H

#include <QDialog>

namespace Ui {
class DialogCt;
}

class DialogCt : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCt(QWidget *parent = 0);
    void grab_start();
    void boxInit();
    ~DialogCt();

private:
    Ui::DialogCt *ui;

    void grabAndShow();
    QImage qImg;

    int start_flag = 2;
private slots:
  // void on_pushButton_start_clicked();

    void paintEvent(QPaintEvent *);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
};

#endif // DIALOGCT_H
