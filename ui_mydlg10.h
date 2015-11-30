/********************************************************************************
** Form generated from reading UI file 'mydlg10.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDLG10_H
#define UI_MYDLG10_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_myDlg10
{
public:
    QTextEdit *textEdit;

    void setupUi(QDialog *myDlg10)
    {
        if (myDlg10->objectName().isEmpty())
            myDlg10->setObjectName(QString::fromUtf8("myDlg10"));
        myDlg10->resize(400, 300);
        textEdit = new QTextEdit(myDlg10);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(100, 60, 141, 51));

        retranslateUi(myDlg10);

        QMetaObject::connectSlotsByName(myDlg10);
    } // setupUi

    void retranslateUi(QDialog *myDlg10)
    {
        myDlg10->setWindowTitle(QApplication::translate("myDlg10", "Dialog", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("myDlg10", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\230\276\347\244\272\350\267\235\347\246\273\346\210\226\346\265\213\350\257\225\345\244\261\350\264\245</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class myDlg10: public Ui_myDlg10 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDLG10_H
