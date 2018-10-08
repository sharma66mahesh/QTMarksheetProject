/********************************************************************************
** Form generated from reading UI file 'markSheet.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKSHEET_H
#define UI_MARKSHEET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_marksheetForm
{
public:
    QLabel *logo;
    QGraphicsView *backGround;
    QLabel *name_level;
    QLabel *Header;
    QLabel *examRoll_CRN;
    QLabel *fail_absent;
    QFrame *signLine;
    QLabel *deanSign;
    QTableView *remarksTable;
    QLabel *nameLabel;
    QLabel *levelLabel;
    QLabel *campusLabel;
    QLabel *yearPartLabel;
    QLabel *programLabel;
    QLabel *CRNlabel;
    QLabel *symbLabel;
    QTableView *marksTable;
    QLabel *label;
    QLabel *totalLabel;
    QLabel *label_2;
    QLabel *resultLabel;

    void setupUi(QDialog *marksheetForm)
    {
        if (marksheetForm->objectName().isEmpty())
            marksheetForm->setObjectName(QString::fromUtf8("marksheetForm"));
        marksheetForm->resize(673, 691);
        marksheetForm->setMinimumSize(QSize(673, 691));
        marksheetForm->setMaximumSize(QSize(673, 691));
        logo = new QLabel(marksheetForm);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(20, 10, 101, 91));
        logo->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/tu-logo.jpg")));
        logo->setScaledContents(true);
        backGround = new QGraphicsView(marksheetForm);
        backGround->setObjectName(QString::fromUtf8("backGround"));
        backGround->setGeometry(QRect(-25, -19, 731, 721));
        name_level = new QLabel(marksheetForm);
        name_level->setObjectName(QString::fromUtf8("name_level"));
        name_level->setGeometry(QRect(30, 150, 121, 101));
        Header = new QLabel(marksheetForm);
        Header->setObjectName(QString::fromUtf8("Header"));
        Header->setGeometry(QRect(210, 0, 221, 151));
        examRoll_CRN = new QLabel(marksheetForm);
        examRoll_CRN->setObjectName(QString::fromUtf8("examRoll_CRN"));
        examRoll_CRN->setGeometry(QRect(450, 150, 71, 71));
        fail_absent = new QLabel(marksheetForm);
        fail_absent->setObjectName(QString::fromUtf8("fail_absent"));
        fail_absent->setGeometry(QRect(10, 660, 161, 16));
        signLine = new QFrame(marksheetForm);
        signLine->setObjectName(QString::fromUtf8("signLine"));
        signLine->setGeometry(QRect(540, 670, 118, 3));
        signLine->setFrameShape(QFrame::HLine);
        signLine->setFrameShadow(QFrame::Sunken);
        deanSign = new QLabel(marksheetForm);
        deanSign->setObjectName(QString::fromUtf8("deanSign"));
        deanSign->setGeometry(QRect(570, 670, 81, 16));
        remarksTable = new QTableView(marksheetForm);
        remarksTable->setObjectName(QString::fromUtf8("remarksTable"));
        remarksTable->setGeometry(QRect(10, 590, 651, 61));
        nameLabel = new QLabel(marksheetForm);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(120, 156, 181, 16));
        levelLabel = new QLabel(marksheetForm);
        levelLabel->setObjectName(QString::fromUtf8("levelLabel"));
        levelLabel->setGeometry(QRect(120, 178, 101, 16));
        campusLabel = new QLabel(marksheetForm);
        campusLabel->setObjectName(QString::fromUtf8("campusLabel"));
        campusLabel->setGeometry(QRect(120, 203, 101, 16));
        yearPartLabel = new QLabel(marksheetForm);
        yearPartLabel->setObjectName(QString::fromUtf8("yearPartLabel"));
        yearPartLabel->setGeometry(QRect(120, 225, 101, 16));
        programLabel = new QLabel(marksheetForm);
        programLabel->setObjectName(QString::fromUtf8("programLabel"));
        programLabel->setGeometry(QRect(550, 199, 121, 16));
        CRNlabel = new QLabel(marksheetForm);
        CRNlabel->setObjectName(QString::fromUtf8("CRNlabel"));
        CRNlabel->setGeometry(QRect(550, 175, 101, 16));
        symbLabel = new QLabel(marksheetForm);
        symbLabel->setObjectName(QString::fromUtf8("symbLabel"));
        symbLabel->setGeometry(QRect(550, 152, 101, 16));
        marksTable = new QTableView(marksheetForm);
        marksTable->setObjectName(QString::fromUtf8("marksTable"));
        marksTable->setGeometry(QRect(10, 250, 651, 321));
        marksTable->horizontalHeader()->setVisible(false);
        marksTable->verticalHeader()->setVisible(false);
        label = new QLabel(marksheetForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(490, 600, 71, 16));
        totalLabel = new QLabel(marksheetForm);
        totalLabel->setObjectName(QString::fromUtf8("totalLabel"));
        totalLabel->setGeometry(QRect(570, 600, 47, 13));
        label_2 = new QLabel(marksheetForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(490, 630, 47, 13));
        resultLabel = new QLabel(marksheetForm);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(570, 630, 47, 13));
        backGround->raise();
        campusLabel->raise();
        nameLabel->raise();
        name_level->raise();
        Header->raise();
        examRoll_CRN->raise();
        fail_absent->raise();
        signLine->raise();
        deanSign->raise();
        logo->raise();
        remarksTable->raise();
        levelLabel->raise();
        yearPartLabel->raise();
        programLabel->raise();
        CRNlabel->raise();
        symbLabel->raise();
        marksTable->raise();
        label->raise();
        totalLabel->raise();
        label_2->raise();
        resultLabel->raise();

        retranslateUi(marksheetForm);

        QMetaObject::connectSlotsByName(marksheetForm);
    } // setupUi

    void retranslateUi(QDialog *marksheetForm)
    {
        marksheetForm->setWindowTitle(QApplication::translate("marksheetForm", "Student Marksheet", 0, QApplication::UnicodeUTF8));
        name_level->setText(QApplication::translate("marksheetForm", "<html><head/><body><p><span style=\" font-size:7pt; font-weight:600;\">Name:</span></p><p><span style=\" font-size:7pt; font-weight:600;\">Level:</span></p><p><span style=\" font-size:7pt; font-weight:600;\">Campus:</span></p><p><span style=\" font-size:7pt; font-weight:600;\">Year/Part:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        Header->setText(QApplication::translate("marksheetForm", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">Tribhuvan University</span></p><p align=\"center\"><span style=\" font-weight:600;\">Institute Of Engineering</span></p><p align=\"center\"><span style=\" font-weight:600;\">Exam Control Division</span></p><p align=\"center\">Chakupat, Lalitpur</p><p align=\"center\"><span style=\" font-weight:600;\">Regular/ Back Paper Examination</span></p><p align=\"center\"/><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">Statement Of Marks</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        examRoll_CRN->setText(QApplication::translate("marksheetForm", "<html><head/><body><p><span style=\" font-size:7pt; font-weight:600;\">Exam Roll No.:</span></p><p><span style=\" font-size:7pt; font-weight:600;\">CRN:</span></p><p><span style=\" font-size:7pt; font-weight:600;\">Programme:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        fail_absent->setText(QApplication::translate("marksheetForm", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">* - Fail 	A - Absent</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        deanSign->setText(QApplication::translate("marksheetForm", "<html><head/><body><p><span style=\" font-weight:600;\">Asst. Dean</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        nameLabel->setText(QApplication::translate("marksheetForm", "TextLabel", 0, QApplication::UnicodeUTF8));
        levelLabel->setText(QApplication::translate("marksheetForm", "TextLabel", 0, QApplication::UnicodeUTF8));
        campusLabel->setText(QApplication::translate("marksheetForm", "TextLabel", 0, QApplication::UnicodeUTF8));
        yearPartLabel->setText(QApplication::translate("marksheetForm", "TextLabel", 0, QApplication::UnicodeUTF8));
        programLabel->setText(QApplication::translate("marksheetForm", "TextLabel", 0, QApplication::UnicodeUTF8));
        CRNlabel->setText(QApplication::translate("marksheetForm", "TextLabel", 0, QApplication::UnicodeUTF8));
        symbLabel->setText(QApplication::translate("marksheetForm", "TextLabel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("marksheetForm", "Grand Total", 0, QApplication::UnicodeUTF8));
        totalLabel->setText(QString());
        label_2->setText(QApplication::translate("marksheetForm", "Result", 0, QApplication::UnicodeUTF8));
        resultLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class marksheetForm: public Ui_marksheetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKSHEET_H
