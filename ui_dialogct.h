/********************************************************************************
** Form generated from reading UI file 'dialogct.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCT_H
#define UI_DIALOGCT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogCt
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *DialogCt)
    {
        if (DialogCt->objectName().isEmpty())
            DialogCt->setObjectName(QString::fromUtf8("DialogCt"));
        DialogCt->resize(472, 363);
        label = new QLabel(DialogCt);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 80, 121, 81));
        pushButton = new QPushButton(DialogCt);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 80, 99, 27));

        retranslateUi(DialogCt);

        QMetaObject::connectSlotsByName(DialogCt);
    } // setupUi

    void retranslateUi(QDialog *DialogCt)
    {
        DialogCt->setWindowTitle(QApplication::translate("DialogCt", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogCt", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DialogCt", "Start", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogCt: public Ui_DialogCt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCT_H
