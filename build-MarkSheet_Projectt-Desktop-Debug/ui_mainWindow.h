/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowForm
{
public:
    QListWidget *studentList;
    QLineEdit *searchField;
    QLabel *searchLabel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *goButton;
    QPushButton *viewMarks;
    QPushButton *Add;
    QPushButton *Edit;
    QPushButton *Delete;
    QPushButton *statButton;

    void setupUi(QDialog *MainWindowForm)
    {
        if (MainWindowForm->objectName().isEmpty())
            MainWindowForm->setObjectName(QString::fromUtf8("MainWindowForm"));
        MainWindowForm->resize(458, 323);
        MainWindowForm->setMinimumSize(QSize(458, 323));
        MainWindowForm->setMaximumSize(QSize(458, 323));
        studentList = new QListWidget(MainWindowForm);
        studentList->setObjectName(QString::fromUtf8("studentList"));
        studentList->setGeometry(QRect(10, 60, 321, 251));
        searchField = new QLineEdit(MainWindowForm);
        searchField->setObjectName(QString::fromUtf8("searchField"));
        searchField->setGeometry(QRect(80, 19, 251, 21));
        searchLabel = new QLabel(MainWindowForm);
        searchLabel->setObjectName(QString::fromUtf8("searchLabel"));
        searchLabel->setGeometry(QRect(10, 23, 46, 13));
        layoutWidget = new QWidget(MainWindowForm);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(350, 0, 91, 291));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        goButton = new QPushButton(layoutWidget);
        goButton->setObjectName(QString::fromUtf8("goButton"));

        verticalLayout->addWidget(goButton);

        viewMarks = new QPushButton(layoutWidget);
        viewMarks->setObjectName(QString::fromUtf8("viewMarks"));

        verticalLayout->addWidget(viewMarks);

        Add = new QPushButton(layoutWidget);
        Add->setObjectName(QString::fromUtf8("Add"));

        verticalLayout->addWidget(Add);

        Edit = new QPushButton(layoutWidget);
        Edit->setObjectName(QString::fromUtf8("Edit"));

        verticalLayout->addWidget(Edit);

        Delete = new QPushButton(layoutWidget);
        Delete->setObjectName(QString::fromUtf8("Delete"));

        verticalLayout->addWidget(Delete);

        statButton = new QPushButton(layoutWidget);
        statButton->setObjectName(QString::fromUtf8("statButton"));

        verticalLayout->addWidget(statButton);

        QWidget::setTabOrder(searchField, goButton);
        QWidget::setTabOrder(goButton, viewMarks);
        QWidget::setTabOrder(viewMarks, Add);
        QWidget::setTabOrder(Add, Edit);
        QWidget::setTabOrder(Edit, Delete);
        QWidget::setTabOrder(Delete, statButton);
        QWidget::setTabOrder(statButton, studentList);

        retranslateUi(MainWindowForm);

        QMetaObject::connectSlotsByName(MainWindowForm);
    } // setupUi

    void retranslateUi(QDialog *MainWindowForm)
    {
        MainWindowForm->setWindowTitle(QApplication::translate("MainWindowForm", "Marksheet Software", 0, QApplication::UnicodeUTF8));
        searchLabel->setText(QApplication::translate("MainWindowForm", "Search:", 0, QApplication::UnicodeUTF8));
        goButton->setText(QApplication::translate("MainWindowForm", "Go!", 0, QApplication::UnicodeUTF8));
        viewMarks->setText(QApplication::translate("MainWindowForm", "View Marksheet", 0, QApplication::UnicodeUTF8));
        Add->setText(QApplication::translate("MainWindowForm", "Add", 0, QApplication::UnicodeUTF8));
        Edit->setText(QApplication::translate("MainWindowForm", "Edit", 0, QApplication::UnicodeUTF8));
        Delete->setText(QApplication::translate("MainWindowForm", "Delete", 0, QApplication::UnicodeUTF8));
        statButton->setText(QApplication::translate("MainWindowForm", "Stats.....", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowForm: public Ui_MainWindowForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
