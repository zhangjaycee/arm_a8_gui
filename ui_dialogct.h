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

QT_BEGIN_NAMESPACE

class Ui_DialogCt
{
public:
    QLabel *label;

    void setupUi(QDialog *DialogCt)
    {
        if (DialogCt->objectName().isEmpty())
            DialogCt->setObjectName(QString::fromUtf8("DialogCt"));
        DialogCt->resize(449, 363);
        label = new QLabel(DialogCt);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 321, 241));

        retranslateUi(DialogCt);

        QMetaObject::connectSlotsByName(DialogCt);
    } // setupUi

    void retranslateUi(QDialog *DialogCt)
    {
        DialogCt->setWindowTitle(QApplication::translate("DialogCt", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogCt: public Ui_DialogCt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCT_H
