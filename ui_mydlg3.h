/********************************************************************************
** Form generated from reading UI file 'mydlg3.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDLG3_H
#define UI_MYDLG3_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_myDlg3
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *myDlg3)
    {
        if (myDlg3->objectName().isEmpty())
            myDlg3->setObjectName(QString::fromUtf8("myDlg3"));
        myDlg3->resize(400, 300);
        pushButton = new QPushButton(myDlg3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 100, 131, 61));
        pushButton_2 = new QPushButton(myDlg3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 100, 131, 61));

        retranslateUi(myDlg3);

        QMetaObject::connectSlotsByName(myDlg3);
    } // setupUi

    void retranslateUi(QDialog *myDlg3)
    {
        myDlg3->setWindowTitle(QApplication::translate("myDlg3", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myDlg3", "\351\237\263\351\242\221", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myDlg3", "\350\247\206\351\242\221", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myDlg3: public Ui_myDlg3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDLG3_H
