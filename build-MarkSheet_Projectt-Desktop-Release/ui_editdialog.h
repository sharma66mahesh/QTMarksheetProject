/********************************************************************************
** Form generated from reading UI file 'editdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDIALOG_H
#define UI_EDITDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *title;
    QFrame *line;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *a8;
    QLabel *sub7;
    QLabel *sub8;
    QLineEdit *t7;
    QLineEdit *a7;
    QLabel *sub6;
    QLabel *sub1;
    QLabel *Theory;
    QLabel *Ass;
    QLineEdit *a1;
    QLineEdit *t1;
    QLabel *sub3;
    QLineEdit *a2;
    QLabel *sub2;
    QLabel *sub5;
    QLineEdit *t2;
    QLineEdit *a4;
    QLineEdit *t4;
    QLineEdit *a6;
    QLineEdit *a5;
    QLineEdit *t5;
    QLineEdit *t6;
    QLabel *sub4;
    QLabel *sub9;
    QLineEdit *a9;
    QLineEdit *t8;
    QLineEdit *a3;
    QLineEdit *t3;
    QLineEdit *t9;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QLabel *fName;
    QLineEdit *lNamField;
    QLineEdit *fNamField;
    QLabel *lName;
    QLineEdit *yearField;
    QLabel *year;
    QLineEdit *cRollField;
    QLineEdit *semField;
    QLabel *camRoll;
    QLabel *symbol;
    QLabel *sem;
    QLineEdit *symbField;
    QPushButton *genSubject;

    void setupUi(QDialog *EditDialog)
    {
        if (EditDialog->objectName().isEmpty())
            EditDialog->setObjectName(QString::fromUtf8("EditDialog"));
        EditDialog->resize(742, 430);
        EditDialog->setMinimumSize(QSize(742, 430));
        EditDialog->setMaximumSize(QSize(742, 430));
        buttonBox = new QDialogButtonBox(EditDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(550, 400, 156, 23));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        title = new QLabel(EditDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(370, 10, 371, 21));
        line = new QFrame(EditDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(330, 0, 20, 431));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(EditDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(380, 40, 331, 330));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(8);
        gridLayout->setVerticalSpacing(15);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        a8 = new QLineEdit(layoutWidget);
        a8->setObjectName(QString::fromUtf8("a8"));

        gridLayout->addWidget(a8, 8, 1, 1, 1);

        sub7 = new QLabel(layoutWidget);
        sub7->setObjectName(QString::fromUtf8("sub7"));

        gridLayout->addWidget(sub7, 7, 0, 1, 1);

        sub8 = new QLabel(layoutWidget);
        sub8->setObjectName(QString::fromUtf8("sub8"));

        gridLayout->addWidget(sub8, 8, 0, 1, 1);

        t7 = new QLineEdit(layoutWidget);
        t7->setObjectName(QString::fromUtf8("t7"));

        gridLayout->addWidget(t7, 7, 2, 1, 1);

        a7 = new QLineEdit(layoutWidget);
        a7->setObjectName(QString::fromUtf8("a7"));

        gridLayout->addWidget(a7, 7, 1, 1, 1);

        sub6 = new QLabel(layoutWidget);
        sub6->setObjectName(QString::fromUtf8("sub6"));

        gridLayout->addWidget(sub6, 6, 0, 1, 1);

        sub1 = new QLabel(layoutWidget);
        sub1->setObjectName(QString::fromUtf8("sub1"));

        gridLayout->addWidget(sub1, 1, 0, 1, 1);

        Theory = new QLabel(layoutWidget);
        Theory->setObjectName(QString::fromUtf8("Theory"));

        gridLayout->addWidget(Theory, 0, 2, 1, 1);

        Ass = new QLabel(layoutWidget);
        Ass->setObjectName(QString::fromUtf8("Ass"));

        gridLayout->addWidget(Ass, 0, 1, 1, 1);

        a1 = new QLineEdit(layoutWidget);
        a1->setObjectName(QString::fromUtf8("a1"));

        gridLayout->addWidget(a1, 1, 1, 1, 1);

        t1 = new QLineEdit(layoutWidget);
        t1->setObjectName(QString::fromUtf8("t1"));

        gridLayout->addWidget(t1, 1, 2, 1, 1);

        sub3 = new QLabel(layoutWidget);
        sub3->setObjectName(QString::fromUtf8("sub3"));

        gridLayout->addWidget(sub3, 3, 0, 1, 1);

        a2 = new QLineEdit(layoutWidget);
        a2->setObjectName(QString::fromUtf8("a2"));

        gridLayout->addWidget(a2, 2, 1, 1, 1);

        sub2 = new QLabel(layoutWidget);
        sub2->setObjectName(QString::fromUtf8("sub2"));

        gridLayout->addWidget(sub2, 2, 0, 1, 1);

        sub5 = new QLabel(layoutWidget);
        sub5->setObjectName(QString::fromUtf8("sub5"));

        gridLayout->addWidget(sub5, 5, 0, 1, 1);

        t2 = new QLineEdit(layoutWidget);
        t2->setObjectName(QString::fromUtf8("t2"));

        gridLayout->addWidget(t2, 2, 2, 1, 1);

        a4 = new QLineEdit(layoutWidget);
        a4->setObjectName(QString::fromUtf8("a4"));

        gridLayout->addWidget(a4, 4, 1, 1, 1);

        t4 = new QLineEdit(layoutWidget);
        t4->setObjectName(QString::fromUtf8("t4"));

        gridLayout->addWidget(t4, 4, 2, 1, 1);

        a6 = new QLineEdit(layoutWidget);
        a6->setObjectName(QString::fromUtf8("a6"));

        gridLayout->addWidget(a6, 6, 1, 1, 1);

        a5 = new QLineEdit(layoutWidget);
        a5->setObjectName(QString::fromUtf8("a5"));

        gridLayout->addWidget(a5, 5, 1, 1, 1);

        t5 = new QLineEdit(layoutWidget);
        t5->setObjectName(QString::fromUtf8("t5"));

        gridLayout->addWidget(t5, 5, 2, 1, 1);

        t6 = new QLineEdit(layoutWidget);
        t6->setObjectName(QString::fromUtf8("t6"));

        gridLayout->addWidget(t6, 6, 2, 1, 1);

        sub4 = new QLabel(layoutWidget);
        sub4->setObjectName(QString::fromUtf8("sub4"));

        gridLayout->addWidget(sub4, 4, 0, 1, 1);

        sub9 = new QLabel(layoutWidget);
        sub9->setObjectName(QString::fromUtf8("sub9"));

        gridLayout->addWidget(sub9, 9, 0, 1, 1);

        a9 = new QLineEdit(layoutWidget);
        a9->setObjectName(QString::fromUtf8("a9"));

        gridLayout->addWidget(a9, 9, 1, 1, 1);

        t8 = new QLineEdit(layoutWidget);
        t8->setObjectName(QString::fromUtf8("t8"));

        gridLayout->addWidget(t8, 8, 2, 1, 1);

        a3 = new QLineEdit(layoutWidget);
        a3->setObjectName(QString::fromUtf8("a3"));

        gridLayout->addWidget(a3, 3, 1, 1, 1);

        t3 = new QLineEdit(layoutWidget);
        t3->setObjectName(QString::fromUtf8("t3"));

        gridLayout->addWidget(t3, 3, 2, 1, 1);

        t9 = new QLineEdit(layoutWidget);
        t9->setObjectName(QString::fromUtf8("t9"));

        gridLayout->addWidget(t9, 9, 2, 1, 1);

        layoutWidget1 = new QWidget(EditDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 281, 381));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(24);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        fName = new QLabel(layoutWidget1);
        fName->setObjectName(QString::fromUtf8("fName"));

        gridLayout_2->addWidget(fName, 0, 0, 1, 1);

        lNamField = new QLineEdit(layoutWidget1);
        lNamField->setObjectName(QString::fromUtf8("lNamField"));

        gridLayout_2->addWidget(lNamField, 1, 1, 1, 1);

        fNamField = new QLineEdit(layoutWidget1);
        fNamField->setObjectName(QString::fromUtf8("fNamField"));

        gridLayout_2->addWidget(fNamField, 0, 1, 1, 1);

        lName = new QLabel(layoutWidget1);
        lName->setObjectName(QString::fromUtf8("lName"));

        gridLayout_2->addWidget(lName, 1, 0, 1, 1);

        yearField = new QLineEdit(layoutWidget1);
        yearField->setObjectName(QString::fromUtf8("yearField"));

        gridLayout_2->addWidget(yearField, 2, 1, 1, 1);

        year = new QLabel(layoutWidget1);
        year->setObjectName(QString::fromUtf8("year"));

        gridLayout_2->addWidget(year, 2, 0, 1, 1);

        cRollField = new QLineEdit(layoutWidget1);
        cRollField->setObjectName(QString::fromUtf8("cRollField"));

        gridLayout_2->addWidget(cRollField, 4, 1, 1, 1);

        semField = new QLineEdit(layoutWidget1);
        semField->setObjectName(QString::fromUtf8("semField"));

        gridLayout_2->addWidget(semField, 3, 1, 1, 1);

        camRoll = new QLabel(layoutWidget1);
        camRoll->setObjectName(QString::fromUtf8("camRoll"));

        gridLayout_2->addWidget(camRoll, 4, 0, 1, 1);

        symbol = new QLabel(layoutWidget1);
        symbol->setObjectName(QString::fromUtf8("symbol"));

        gridLayout_2->addWidget(symbol, 5, 0, 1, 1);

        sem = new QLabel(layoutWidget1);
        sem->setObjectName(QString::fromUtf8("sem"));

        gridLayout_2->addWidget(sem, 3, 0, 1, 1);

        symbField = new QLineEdit(layoutWidget1);
        symbField->setObjectName(QString::fromUtf8("symbField"));

        gridLayout_2->addWidget(symbField, 5, 1, 1, 1);

        genSubject = new QPushButton(EditDialog);
        genSubject->setObjectName(QString::fromUtf8("genSubject"));
        genSubject->setGeometry(QRect(190, 390, 97, 23));
        QWidget::setTabOrder(fNamField, lNamField);
        QWidget::setTabOrder(lNamField, yearField);
        QWidget::setTabOrder(yearField, semField);
        QWidget::setTabOrder(semField, cRollField);
        QWidget::setTabOrder(cRollField, symbField);
        QWidget::setTabOrder(symbField, genSubject);
        QWidget::setTabOrder(genSubject, a1);
        QWidget::setTabOrder(a1, t1);
        QWidget::setTabOrder(t1, a2);
        QWidget::setTabOrder(a2, t2);
        QWidget::setTabOrder(t2, a3);
        QWidget::setTabOrder(a3, a4);
        QWidget::setTabOrder(a4, t4);
        QWidget::setTabOrder(t4, a5);
        QWidget::setTabOrder(a5, t5);
        QWidget::setTabOrder(t5, a6);
        QWidget::setTabOrder(a6, t6);
        QWidget::setTabOrder(t6, a7);
        QWidget::setTabOrder(a7, t7);
        QWidget::setTabOrder(t7, a8);
        QWidget::setTabOrder(a8, t8);
        QWidget::setTabOrder(t8, a9);

        retranslateUi(EditDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditDialog);
    } // setupUi

    void retranslateUi(QDialog *EditDialog)
    {
        EditDialog->setWindowTitle(QApplication::translate("EditDialog", "Edit Window", 0, QApplication::UnicodeUTF8));
        title->setText(QApplication::translate("EditDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:600;\">ENTER MARKS FOR THE FOLLOWING SUBJECTS</span></p><p align=\"center\"><br/></p></body></html>", 0, QApplication::UnicodeUTF8));
        sub7->setText(QApplication::translate("EditDialog", "Sub7", 0, QApplication::UnicodeUTF8));
        sub8->setText(QApplication::translate("EditDialog", "Sub8", 0, QApplication::UnicodeUTF8));
        sub6->setText(QApplication::translate("EditDialog", "Sub6", 0, QApplication::UnicodeUTF8));
        sub1->setText(QApplication::translate("EditDialog", "Sub1", 0, QApplication::UnicodeUTF8));
        Theory->setText(QApplication::translate("EditDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Theory</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        Ass->setText(QApplication::translate("EditDialog", "<html><head/><body><p><span style=\" font-weight:600;\">Assessment</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        sub3->setText(QApplication::translate("EditDialog", "Sub3", 0, QApplication::UnicodeUTF8));
        sub2->setText(QApplication::translate("EditDialog", "Sub2", 0, QApplication::UnicodeUTF8));
        sub5->setText(QApplication::translate("EditDialog", "Sub5", 0, QApplication::UnicodeUTF8));
        sub4->setText(QApplication::translate("EditDialog", "Sub4", 0, QApplication::UnicodeUTF8));
        sub9->setText(QApplication::translate("EditDialog", "Sub9", 0, QApplication::UnicodeUTF8));
        fName->setText(QApplication::translate("EditDialog", "First Name", 0, QApplication::UnicodeUTF8));
        lName->setText(QApplication::translate("EditDialog", "Last Name", 0, QApplication::UnicodeUTF8));
        year->setText(QApplication::translate("EditDialog", "Year", 0, QApplication::UnicodeUTF8));
        camRoll->setText(QApplication::translate("EditDialog", "Campus Roll", 0, QApplication::UnicodeUTF8));
        symbol->setText(QApplication::translate("EditDialog", "Symbol No.", 0, QApplication::UnicodeUTF8));
        sem->setText(QApplication::translate("EditDialog", "Sem", 0, QApplication::UnicodeUTF8));
        genSubject->setText(QApplication::translate("EditDialog", "Generate Subjects", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditDialog: public Ui_EditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDIALOG_H
