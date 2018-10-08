#include "editDialog.h"
#include<QFile>
#include<QDataStream>
#include<Qdebug>
EditDialog::EditDialog(int flag, QDialog *parent) : QDialog(parent)
{
    uiE.setupUi(this);

    QObject::connect(uiE.buttonBox, SIGNAL(accepted()), this, SLOT(write2file()));
    QObject::connect(uiE.genSubject, SIGNAL(clicked(bool)), this, SLOT(setForSem()));

}

void EditDialog::write2file()
{
    qDebug() << "Write2File function called";
    ObtainedMarks toWrite;
    if(uiE.semField->text().trimmed() == "1" && uiE.yearField->text().trimmed() == "1")
    {
        toWrite.writeToFile(1, 1, uiE);
    }
}

void EditDialog::setForSem()
{
    if(uiE.semField->text().trimmed() == "1" && uiE.yearField->text().trimmed() == "1")
    {
        qDebug() << "HEllo has the subject name changed??";
        uiE.sub1->setText("Engineering Mathematics I");
        uiE.sub2->setText("Computer Programming");
        uiE.sub3->setText("Computer Programming Practical");
        uiE.sub4->setText("Engineering Drawing I Practical");
        uiE.sub5->setText("Engineering Physics");
        uiE.sub6->setText("Engineering Physics Practical");
        uiE.sub7->setText("Applied Mechanics");
        uiE.sub8->setText("Basic Electrical Engineering");
        uiE.sub9->setText("Basic Electrical Engineering Practical");
    }
}
