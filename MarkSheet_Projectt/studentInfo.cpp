#include "studentInfo.h"
#include<QDebug>
#include<QFile>
#include<QIODevice>
#include"mainWindow.h"
#include<iostream>

Student::Student()
{
    campus = "Pulchowk";
    level = "Bachelors";
    programme = "Computer Engineering";
}

void Student::getData()
{

}


SubjectInfo::SubjectInfo() : Student(){}


void SubjectInfo::getSubInfo()
{
    if(year.toInt() == 1 && sem.toInt() == 1)
    {
        subCodes << "SH401" << "CT401" << "CT401" << "ME401" << "SH452"<< "SH452" << "CE451" << "EE451" << "EE451";


        subNames << "Engineering Mathematics I"<< "Computer Programming"<< "Computer Programming PRACTICAL"
                 << "Engineering Drawing I PRACTICAL"<< "Engineering Physics"<< "Engineering Physics PRACTICAL"
                 << "Applied Mechanics"<< "Basic Electrical Engineering"<< "Basic Electrical Engineering PRACTICAL";


        fullTheoryMarks << "80" << "80" << "0" << "40" << "80" << "30" << "80" << "80" << "0";


        fullAsstMarks << "20" << "20" << "50" << "60" << "20" << "20" << "20" << "20" << "25";


        theoryPassMarks << "32"<< "32"<< "0"<< "16"<< "32"<< "12"<< "32"<< "32"<< "0";

        asstPassMarks << "8" << "8" << "20" << "24" << "8" << "8" << "8" << "8" <<"10";
    }
}




ObtainedMarks::ObtainedMarks() : SubjectInfo(){}


QDataStream & operator << (QDataStream &stream, ObtainedMarks &a)
{
    stream << a.fname << a.lname << a.year << a.sem << a.symbolNo << a.level << a.campus << a.campusRoll << a.programme
           << a.subCodes << a.subNames << a.fullTheoryMarks << a.fullAsstMarks << a.theoryPassMarks
           << a.asstPassMarks << a.theoryMarks << a.asstMarks ;
    return stream;
}

QDataStream & operator >> (QDataStream &stream, ObtainedMarks &a)
{
    stream >> a.fname >> a.lname >> a.year >> a.sem >> a.symbolNo >> a.level >> a.campus >> a.campusRoll >> a.programme
           >> a.subCodes >> a.subNames >> a.fullTheoryMarks >> a.fullAsstMarks >> a.theoryPassMarks
           >> a.asstPassMarks >> a.theoryMarks >> a.asstMarks ;
    return stream;
}


void ObtainedMarks::getMarksData()
{
    /*if(sem != 1 || year != 1)
        throw this;*/
    getData();
    getSubInfo();
    cout << "----------------Enter marks for the following subjects--------------\nEnter 0 for non existing ones";

    int i =0;

    do
    {
        i++;
    }while(i < noOfSub.toInt());
}


void ObtainedMarks::writeToFile(int yr, int semNo, Ui::EditDialog &dlg)
{
    if(yr == 1 && semNo == 1)
    {
        QFile file("sem1.txt");

        if(!file.open(QIODevice::Append))
        {
            qDebug() << "error reading in append mode";
            return;
        }

        QDataStream stream(&file);
        stream.setVersion(QDataStream::Qt_4_8);

        fname = dlg.fNamField->text().trimmed().toLower();
        lname = dlg.lNamField->text().trimmed().toLower();
        sem = dlg.semField->text().trimmed().toLower();
        year = dlg.yearField->text().trimmed().toLower();
        campusRoll = dlg.cRollField->text().trimmed().toLower();
        symbolNo = dlg.symbField->text().trimmed().toLower();
        theoryMarks << dlg.t1->text().trimmed().toLower() << dlg.t2->text().trimmed().toLower()
                    << dlg.t3->text().trimmed().toLower() << dlg.t4->text().trimmed().toLower()
                    << dlg.t5->text().trimmed().toLower() << dlg.t6->text().trimmed().toLower()
                    << dlg.t7->text().trimmed().toLower() << dlg.t8->text().trimmed().toLower()
                    << dlg.t9->text().trimmed().toLower();

        asstMarks << dlg.a1->text().trimmed().toLower() << dlg.a2->text().trimmed().toLower()
                  << dlg.a3->text().trimmed().toLower() << dlg.a4->text().trimmed().toLower()
                  << dlg.a5->text().trimmed().toLower() << dlg.a6->text().trimmed().toLower()
                  << dlg.a7->text().trimmed().toLower() << dlg.a8->text().trimmed().toLower()
                  << dlg.a9->text().trimmed().toLower();

        this->getSubInfo();

        stream << *this;

        file.close();
        /*stream >> temp.name >> temp.sem;
        static QString prevName = "";
        if(ui.searchField->text().trimmed() == temp.name.toLower() && temp.name.toLower() != prevName)
        {
            ui.studentList->addItem(temp.name);
            prevName = temp.name.toLower();
        }
        file.close();*/
    }
}


void ObtainedMarks::readFromFile(QString str) //for reading for marksheet
{
    QStringList parts = str.split(" ");
    QStringList yrSem = parts.at(2).split("/");
    QString fnam = parts.at(0);
    QString lnam = parts.at(1);
    QString yr = yrSem.at(0);
    QString sm = yrSem.at(1);
    QString sym = parts.at(3);

    QFile file("sem1.txt");

    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Failed to Open in read Mode";
        return;
    }

    QDataStream stream(&file);
    stream.setVersion(QDataStream::Qt_4_8);

    while(1)
    {
        ObtainedMarks reading;
        int tempPos = file.pos();
        qDebug() << file.pos();
        stream >> fname;
        stream >> lname;
        stream >> year;
        stream >> sem;
        stream >> symbolNo;
        qDebug() << fname << lname << year << sem <<symbolNo;
        if(fname == fnam && lname == lnam && yr == year && sm == sem && sym == symbolNo)
        {
            file.seek(tempPos);
            stream >> *this;
            qDebug() << "Marks is now displayed";
            break;
        }

        else
        {
            file.seek(tempPos);
            stream >> reading;
            qDebug() << "No match Found";
        }
        if(file.atEnd())
            break;
    }
    file.close();
}


void ObtainedMarks::readFromFile(QString name, QListWidget &lst)//for searching
{
    lst.clear();
    QFile file("sem1.txt");

    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Failed to Open in read Mode";
        return;
    }

    QDataStream stream(&file);
    stream.setVersion(QDataStream::Qt_4_8);

    while(1)
    {
        qDebug() << "while loop entered";
        ObtainedMarks toRead;

        if(name.contains(" "))
        {
            int tempPos = file.pos();
            qDebug() << tempPos;
            stream >> fname;
            qDebug() << "after reading first name" << file.pos();
            stream >> lname;
            qDebug() << "after reading last name" << file.pos();
            qDebug() << fname + lname << name.trimmed().toLower();
            if(name.trimmed().toLower() == fname + " " + lname)
            {
                file.seek(tempPos);
                stream >> *this;
                qDebug() << file.pos();
                qDebug() << "file matched, contains blank space";
                lst.addItem(fname + " " + lname + " " + year + "/" + sem + " " + symbolNo);
            }

            else
            {
                file.seek(tempPos);
                qDebug() << file.pos();
                qDebug() << "COntains space but no match found";
                stream >> toRead;
                qDebug() << toRead.fname;

                fname.clear();
                lname.clear();
            }
        }

        else
        {
            qDebug() << file.pos();
            int tempPos = file.pos();
            stream >> fname;
            if(name == fname)
            {
                qDebug() << "First Name matched";
                file.seek(tempPos);
                stream >> *this;
                lst.addItem(fname + " " + lname + " " + year + "/" + sem + " " + symbolNo);
            }

            else
            {

                qDebug() << file.pos();
                qDebug() << "FIrst name entered but no match";
                file.seek(tempPos);
                qDebug() << "after going back" << file.pos();
                stream >> toRead;
                qDebug() << "after reading to stream" << file.pos();
                fname.clear();
                qDebug() << toRead.fname;
            }
        }
    if(file.atEnd())
        break;

    }
    file.close();
}


void ObtainedMarks::readFromFile(QString str, int flag, int &pos) //for reading for editingData
{
    QStringList parts = str.split(" ");
    QStringList yrSem = parts.at(2).split("/");
    QString fnam = parts.at(0);
    QString lnam = parts.at(1);
    QString yr = yrSem.at(0);
    QString sm = yrSem.at(1);
    QString sym = parts.at(3);

    QFile file("sem1.txt");

    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Failed to Open in read Mode";
        return;
    }

    QDataStream stream(&file);
    stream.setVersion(QDataStream::Qt_4_8);

    while(1)
    {
        ObtainedMarks reading;
        int tempPos = file.pos();
        qDebug() << file.pos();
        stream >> fname;
        stream >> lname;
        stream >> year;
        stream >> sem;
        stream >> symbolNo;
        qDebug() << fname << lname << year << sem <<symbolNo;
        if(fname == fnam && lname == lnam && yr == year && sm == sem && sym == symbolNo)
        {
            file.seek(tempPos);
            qDebug() << "editing the data " << fnam << lnam;
            if(flag == 1)
            {
                pos = tempPos;
            }
            break;
        }

        else
        {
            file.seek(tempPos);
            stream >> reading;
            qDebug() << "No match Found";
        }
        if(file.atEnd())
            break;
    }
    file.close();
}
