/********************************************************************************
** Form generated from reading UI file 'mydlg9.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDLG9_H
#define UI_MYDLG9_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_myDlg9
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *myDlg9)
    {
        if (myDlg9->objectName().isEmpty())
            myDlg9->setObjectName(QString::fromUtf8("myDlg9"));
        myDlg9->resize(400, 300);
        pushButton = new QPushButton(myDlg9);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 70, 141, 61));

        retranslateUi(myDlg9);

        QMetaObject::connectSlotsByName(myDlg9);
    } // setupUi

    void retranslateUi(QDialog *myDlg9)
    {
        myDlg9->setWindowTitle(QApplication::translate("myDlg9", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myDlg9", "\345\216\213\347\274\251\345\256\214\346\210\220", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myDlg9: public Ui_myDlg9 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDLG9_H
