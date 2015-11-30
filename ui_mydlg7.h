/********************************************************************************
** Form generated from reading UI file 'mydlg7.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDLG7_H
#define UI_MYDLG7_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_myDlg7
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTextEdit *textEdit;

    void setupUi(QDialog *myDlg7)
    {
        if (myDlg7->objectName().isEmpty())
            myDlg7->setObjectName(QString::fromUtf8("myDlg7"));
        myDlg7->resize(400, 300);
        lineEdit = new QLineEdit(myDlg7);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 10, 113, 27));
        pushButton = new QPushButton(myDlg7);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 70, 131, 27));
        pushButton_2 = new QPushButton(myDlg7);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 120, 131, 27));
        pushButton_3 = new QPushButton(myDlg7);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 170, 131, 27));
        textEdit = new QTextEdit(myDlg7);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(240, 80, 131, 101));

        retranslateUi(myDlg7);

        QMetaObject::connectSlotsByName(myDlg7);
    } // setupUi

    void retranslateUi(QDialog *myDlg7)
    {
        myDlg7->setWindowTitle(QApplication::translate("myDlg7", "Dialog", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QApplication::translate("myDlg7", "\346\226\207\344\273\266\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("myDlg7", "\346\226\207\344\273\2661", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("myDlg7", "\346\226\207\344\273\2662", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("myDlg7", "\346\226\207\344\273\2663 ", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("myDlg7", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\234\250\350\277\231\345\217\257\344\273\245\350\256\251\346\211\200\346\234\211\347\232\204\346\226\207\344\273\266\346\214\211\351\222\256\351\203\275\346\214\207\345\220\221mydlg8\347\232\204\346\222\255\346\224\276\347\225\214\351\235\242,\350\277\231\345\217\252\344\273\245\347\254\254\344\270\200\344\270\252\344\270\272\344\276\213</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myDlg7: public Ui_myDlg7 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDLG7_H
