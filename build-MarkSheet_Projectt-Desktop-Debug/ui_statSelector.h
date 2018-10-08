/********************************************************************************
** Form generated from reading UI file 'statSelector.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATSELECTOR_H
#define UI_STATSELECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_statSelectForm
{
public:
    QListWidget *statList;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *statSelectForm)
    {
        if (statSelectForm->objectName().isEmpty())
            statSelectForm->setObjectName(QString::fromUtf8("statSelectForm"));
        statSelectForm->resize(346, 209);
        statList = new QListWidget(statSelectForm);
        statList->setObjectName(QString::fromUtf8("statList"));
        statList->setGeometry(QRect(10, 10, 256, 192));
        okButton = new QPushButton(statSelectForm);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(270, 10, 75, 23));
        cancelButton = new QPushButton(statSelectForm);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(270, 50, 75, 23));

        retranslateUi(statSelectForm);

        QMetaObject::connectSlotsByName(statSelectForm);
    } // setupUi

    void retranslateUi(QDialog *statSelectForm)
    {
        statSelectForm->setWindowTitle(QApplication::translate("statSelectForm", "Dialog", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("statSelectForm", "Ok", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("statSelectForm", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class statSelectForm: public Ui_statSelectForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATSELECTOR_H
