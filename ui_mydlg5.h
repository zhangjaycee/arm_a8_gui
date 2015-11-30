/********************************************************************************
** Form generated from reading UI file 'mydlg5.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDLG5_H
#define UI_MYDLG5_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_myDlg5
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *myDlg5)
    {
        if (myDlg5->objectName().isEmpty())
            myDlg5->setObjectName(QString::fromUtf8("myDlg5"));
        myDlg5->resize(400, 300);
        pushButton = new QPushButton(myDlg5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 30, 161, 41));
        pushButton_2 = new QPushButton(myDlg5);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(100, 90, 161, 41));
        pushButton_3 = new QPushButton(myDlg5);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 150, 161, 41));
        pushButton_4 = new QPushButton(myDlg5);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(100, 210, 161, 41));

        retranslateUi(myDlg5);

        QMetaObject::connectSlotsByName(myDlg5);
    } // setupUi

    void retranslateUi(QDialog *myDlg5)
    {
        myDlg5->setWindowTitle(QApplication::translate("myDlg5", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myDlg5", "\350\247\206\351\242\221\351\207\207\351\233\206\344\270\216\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myDlg5", "\347\233\256\346\240\207\350\277\275\350\270\252\344\270\216\346\243\200\346\265\213", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("myDlg5", "\345\233\276\345\203\217\345\216\213\347\274\251", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("myDlg5", "\345\233\276\345\203\217\345\242\236\345\274\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myDlg5: public Ui_myDlg5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDLG5_H
