/********************************************************************************
** Form generated from reading UI file 'mydlg2.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDLG2_H
#define UI_MYDLG2_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_myDlg2
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *myDlg2)
    {
        if (myDlg2->objectName().isEmpty())
            myDlg2->setObjectName(QString::fromUtf8("myDlg2"));
        myDlg2->resize(400, 300);
        pushButton = new QPushButton(myDlg2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 60, 141, 41));
        pushButton_2 = new QPushButton(myDlg2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 140, 131, 41));
        pushButton_3 = new QPushButton(myDlg2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 220, 121, 41));
        pushButton_4 = new QPushButton(myDlg2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(317, 250, 61, 27));

        retranslateUi(myDlg2);

        QMetaObject::connectSlotsByName(myDlg2);
    } // setupUi

    void retranslateUi(QDialog *myDlg2)
    {
        myDlg2->setWindowTitle(QApplication::translate("myDlg2", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myDlg2", "\346\274\224\347\244\272", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myDlg2", "\346\223\215\344\275\234\350\257\264\346\230\216", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("myDlg2", "\345\233\242\351\230\237\350\257\264\346\230\216", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("myDlg2", "\345\205\263\346\234\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myDlg2: public Ui_myDlg2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDLG2_H
