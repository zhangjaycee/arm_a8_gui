/********************************************************************************
** Form generated from reading UI file 'mydlg1.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDLG1_H
#define UI_MYDLG1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_myDlg1
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *myDlg1)
    {
        if (myDlg1->objectName().isEmpty())
            myDlg1->setObjectName(QString::fromUtf8("myDlg1"));
        myDlg1->resize(400, 300);
        pushButton = new QPushButton(myDlg1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 40, 121, 51));
        pushButton_2 = new QPushButton(myDlg1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 220, 98, 27));

        retranslateUi(myDlg1);

        QMetaObject::connectSlotsByName(myDlg1);
    } // setupUi

    void retranslateUi(QDialog *myDlg1)
    {
        myDlg1->setWindowTitle(QApplication::translate("myDlg1", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myDlg1", "\345\274\200\346\234\272\347\225\214\351\235\242\345\276\205\345\256\232", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myDlg1", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myDlg1: public Ui_myDlg1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDLG1_H
