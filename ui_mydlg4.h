/********************************************************************************
** Form generated from reading UI file 'mydlg4.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDLG4_H
#define UI_MYDLG4_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_myDlg4
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *myDlg4)
    {
        if (myDlg4->objectName().isEmpty())
            myDlg4->setObjectName(QString::fromUtf8("myDlg4"));
        myDlg4->resize(400, 300);
        pushButton = new QPushButton(myDlg4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 30, 141, 41));
        pushButton_2 = new QPushButton(myDlg4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 90, 141, 41));
        pushButton_3 = new QPushButton(myDlg4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(110, 150, 141, 41));
        pushButton_4 = new QPushButton(myDlg4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(110, 210, 141, 41));

        retranslateUi(myDlg4);

        QMetaObject::connectSlotsByName(myDlg4);
    } // setupUi

    void retranslateUi(QDialog *myDlg4)
    {
        myDlg4->setWindowTitle(QApplication::translate("myDlg4", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myDlg4", "\351\207\207\351\233\206", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myDlg4", "\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("myDlg4", "\345\216\213\347\274\251", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("myDlg4", "\350\266\205\345\243\260\346\263\242\346\265\213\350\267\235", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myDlg4: public Ui_myDlg4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDLG4_H
