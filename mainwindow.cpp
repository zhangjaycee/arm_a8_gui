#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    my1.show();
}

void MainWindow::on_pushButton_2_clicked()
{
    my2.show();
}

void MainWindow::on_pushButton_3_clicked()
{
    my3.show();
}
