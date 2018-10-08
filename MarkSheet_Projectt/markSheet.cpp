#include "markSheet.h"
#include<QTableView>
#include<QDialog>
#include<QStandardItemModel>
#include<QStandardItem>
#include<QDebug>
#include<QLineEdit>
#include<QTableView>
#include<QString>
#include<QLabel>

MarkSheet::MarkSheet(QWidget *parent) : QDialog(parent)
{
    uim.setupUi(this);
}

void MarkSheet::viewMarksheet(ObtainedMarks &info)
{
    if(info.sem == "1" && info.year == "1")
    {
        int rowNo = 9, flag = 1;

        QStandardItemModel *model = new QStandardItemModel(rowNo, 10);
        QStandardItem *it11 = new QStandardItem("Subjects");
        model->setItem(0, 0, it11);
        QStandardItem *it12 = new QStandardItem("Full Marks");
        model->setItem(0, 2, it12);
        QStandardItem *it13 = new QStandardItem("Pass Marks");
        model->setItem(0, 4, it13);
        QStandardItem *it14 = new QStandardItem("Marks Obtained");
        model->setItem(0, 6, it14);
        QStandardItem *it15 = new QStandardItem("Total");
        model->setItem(0, 8, it15);
        QStandardItem *it16 = new QStandardItem("Remarks");
        model->setItem(0, 9, it16);

        QStandardItem *it21 = new QStandardItem("Code");
        model->setItem(1, 0, it21);
        QStandardItem *it22 = new QStandardItem("Name");
        model->setItem(1, 1, it22);
        QStandardItem *it23 = new QStandardItem("Asst.");
        model->setItem(1, 2, it23);
        QStandardItem *it24 = new QStandardItem("Theory");
        model->setItem(1, 3, it24);
        QStandardItem *it25 = new QStandardItem("Asst.");
        model->setItem(1, 4, it25);
        QStandardItem *it26 = new QStandardItem("Theory");
        model->setItem(1, 5, it26);
        QStandardItem *it27 = new QStandardItem("Asst.");
        model->setItem(1, 6, it27);
        QStandardItem *it28 = new QStandardItem("Theory");
        model->setItem(1, 7, it28);

        uim.nameLabel->setText(info.fname + " " + info.lname);
        uim.levelLabel->setText(info.level);
        uim.campusLabel->setText(info.campus);
        uim.symbLabel->setText(info.symbolNo);
        uim.CRNlabel->setText(info.campusRoll);
        uim.programLabel->setText(info.programme);
        uim.yearPartLabel->setText(info.year + "/" + info.sem);

        for(int i = 0; i < rowNo; i++)
        {
            QStandardItem *it1 = new QStandardItem(info.subCodes.at(i));
            model->setItem(i+2, 0, it1);
            QStandardItem *it2 = new QStandardItem(info.subNames.at(i));
            model->setItem(i+2, 1, it2);
            QStandardItem *it3 = new QStandardItem(info.fullAsstMarks.at(i));
            model->setItem(i+2, 2, it3);
            QStandardItem *it4 = new QStandardItem(info.fullTheoryMarks.at(i));
            model->setItem(i+2, 3, it4);
            QStandardItem *it5 = new QStandardItem(info.asstPassMarks.at(i));
            model->setItem(i+2, 4, it5);
            QStandardItem *it6 = new QStandardItem(info.theoryPassMarks.at(i));
            model->setItem(i+2, 5, it6);
            QStandardItem *it7 = new QStandardItem(info.asstMarks.at(i));
            model->setItem(i+2, 6, it7);
            QStandardItem *it8 = new QStandardItem(info.theoryMarks.at(i));
            model->setItem(i+2, 7, it8);
            QStandardItem *it9 = new QStandardItem(QString::number(info.asstMarks.at(i).toInt() + info.theoryMarks.at(i).toInt()));
            model->setItem(i+2, 8, it9);

            if(info.theoryMarks.at(i).toInt() < info.theoryPassMarks.at(i).toInt()

                    || info.asstMarks.at(i).toInt() < info.asstPassMarks.at(i).toInt())
            {
                flag = 0;
                QStandardItem *it10 = new QStandardItem("*");
                model->setItem(i+2, 9, it10);
            }
        }


        uim.marksTable->setModel(model);
        for(int i = 0; i < rowNo + 2; i++)
        {
            uim.marksTable->setRowHeight(i, 29);
        }
        uim.marksTable->setColumnWidth(0, 47);
        uim.marksTable->setColumnWidth(1, 220);
        uim.marksTable->setColumnWidth(2, 47);
        uim.marksTable->setColumnWidth(3, 47);
        uim.marksTable->setColumnWidth(4, 47);
        uim.marksTable->setColumnWidth(5, 47);
        uim.marksTable->setColumnWidth(6, 47);
        uim.marksTable->setColumnWidth(7, 47);
        uim.marksTable->setColumnWidth(8, 47);
        uim.marksTable->setColumnWidth(9, 53);

        uim.marksTable->setSpan(0, 0, 1, 2);
        uim.marksTable->setSpan(0, 2, 1, 2);
        uim.marksTable->setSpan(0, 4, 1, 2);
        uim.marksTable->setSpan(0, 6, 1, 2);
        uim.marksTable->setSpan(0, 8, 2, 1);
        uim.marksTable->setSpan(0, 9, 2, 1);

        int total = 0;
        for(int i = 2; i < rowNo + 2; i++)
        {
            total += uim.marksTable->model()->data(uim.marksTable->model()->index(i, 8)).toString().toInt();
        }
        uim.totalLabel->setText(QString::number(total));

        flag?uim.resultLabel->setText("Pass") : uim.resultLabel->setText("Fail");
    }

}

