/********************************************************************************
** Form generated from reading UI file 'mydlg8.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDLG8_H
#define UI_MYDLG8_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>

QT_BEGIN_NAMESPACE

class Ui_myDlg8
{
public:
    QSlider *horizontalSlider;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *myDlg8)
    {
        if (myDlg8->objectName().isEmpty())
            myDlg8->setObjectName(QString::fromUtf8("myDlg8"));
        myDlg8->resize(400, 300);
        horizontalSlider = new QSlider(myDlg8);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(150, 60, 160, 29));
        horizontalSlider->setOrientation(Qt::Horizontal);
        lineEdit = new QLineEdit(myDlg8);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 60, 71, 27));
        pushButton = new QPushButton(myDlg8);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 160, 98, 27));
        pushButton_2 = new QPushButton(myDlg8);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 160, 98, 27));
        pushButton_3 = new QPushButton(myDlg8);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(160, 160, 98, 27));

        retranslateUi(myDlg8);

        QMetaObject::connectSlotsByName(myDlg8);
    } // setupUi

    void retranslateUi(QDialog *myDlg8)
    {
        myDlg8->setWindowTitle(QApplication::translate("myDlg8", "Dialog", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("myDlg8", "\350\277\233\345\272\246\346\235\241", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myDlg8", "\344\270\212\344\270\200\351\246\226", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myDlg8", "\344\270\213\344\270\200\351\246\226", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("myDlg8", "\345\274\200\345\247\213/\346\232\202\345\201\234", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myDlg8: public Ui_myDlg8 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDLG8_H
