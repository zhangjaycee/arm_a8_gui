/********************************************************************************
** Form generated from reading UI file 'mydlg6.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDLG6_H
#define UI_MYDLG6_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_myDlg6
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *myDlg6)
    {
        if (myDlg6->objectName().isEmpty())
            myDlg6->setObjectName(QString::fromUtf8("myDlg6"));
        myDlg6->resize(400, 300);
        pushButton = new QPushButton(myDlg6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 30, 131, 51));
        pushButton_2 = new QPushButton(myDlg6);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 160, 98, 27));

        retranslateUi(myDlg6);

        QMetaObject::connectSlotsByName(myDlg6);
    } // setupUi

    void retranslateUi(QDialog *myDlg6)
    {
        myDlg6->setWindowTitle(QApplication::translate("myDlg6", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myDlg6", "\351\207\207\351\233\206\346\227\266\351\225\277", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myDlg6", "\345\274\200\345\247\213/\347\273\223\346\235\237", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myDlg6: public Ui_myDlg6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDLG6_H
