/********************************************************************************
** Form generated from reading UI file 'semSelector.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEMSELECTOR_H
#define UI_SEMSELECTOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_semSelectForm
{
public:
    QPushButton *sem1;
    QPushButton *sem2;
    QPushButton *sem5;
    QPushButton *sem6;
    QPushButton *sem8;
    QPushButton *sem7;
    QPushButton *sem3;
    QPushButton *sem4;

    void setupUi(QDialog *semSelectForm)
    {
        if (semSelectForm->objectName().isEmpty())
            semSelectForm->setObjectName(QString::fromUtf8("semSelectForm"));
        semSelectForm->resize(415, 168);
        sem1 = new QPushButton(semSelectForm);
        sem1->setObjectName(QString::fromUtf8("sem1"));
        sem1->setGeometry(QRect(20, 20, 75, 61));
        sem2 = new QPushButton(semSelectForm);
        sem2->setObjectName(QString::fromUtf8("sem2"));
        sem2->setGeometry(QRect(120, 20, 75, 61));
        sem5 = new QPushButton(semSelectForm);
        sem5->setObjectName(QString::fromUtf8("sem5"));
        sem5->setGeometry(QRect(20, 100, 75, 61));
        sem6 = new QPushButton(semSelectForm);
        sem6->setObjectName(QString::fromUtf8("sem6"));
        sem6->setGeometry(QRect(120, 100, 75, 61));
        sem8 = new QPushButton(semSelectForm);
        sem8->setObjectName(QString::fromUtf8("sem8"));
        sem8->setGeometry(QRect(320, 100, 75, 61));
        sem7 = new QPushButton(semSelectForm);
        sem7->setObjectName(QString::fromUtf8("sem7"));
        sem7->setGeometry(QRect(220, 100, 75, 61));
        sem3 = new QPushButton(semSelectForm);
        sem3->setObjectName(QString::fromUtf8("sem3"));
        sem3->setGeometry(QRect(220, 20, 75, 61));
        sem4 = new QPushButton(semSelectForm);
        sem4->setObjectName(QString::fromUtf8("sem4"));
        sem4->setGeometry(QRect(320, 20, 75, 61));

        retranslateUi(semSelectForm);

        QMetaObject::connectSlotsByName(semSelectForm);
    } // setupUi

    void retranslateUi(QDialog *semSelectForm)
    {
        semSelectForm->setWindowTitle(QApplication::translate("semSelectForm", "Dialog", 0, QApplication::UnicodeUTF8));
        sem1->setText(QApplication::translate("semSelectForm", "Sem 1", 0, QApplication::UnicodeUTF8));
        sem2->setText(QApplication::translate("semSelectForm", "Sem 2", 0, QApplication::UnicodeUTF8));
        sem5->setText(QApplication::translate("semSelectForm", "Sem 5", 0, QApplication::UnicodeUTF8));
        sem6->setText(QApplication::translate("semSelectForm", "Sem 6", 0, QApplication::UnicodeUTF8));
        sem8->setText(QApplication::translate("semSelectForm", "Sem 8", 0, QApplication::UnicodeUTF8));
        sem7->setText(QApplication::translate("semSelectForm", "Sem 7", 0, QApplication::UnicodeUTF8));
        sem3->setText(QApplication::translate("semSelectForm", "Sem 3", 0, QApplication::UnicodeUTF8));
        sem4->setText(QApplication::translate("semSelectForm", "Sem 4", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class semSelectForm: public Ui_semSelectForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEMSELECTOR_H
