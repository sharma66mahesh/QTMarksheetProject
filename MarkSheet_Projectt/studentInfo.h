#ifndef STUDENTINFO_H
#define STUDENTINFO_H

#include<iostream>
#include<fstream>
#include<QString>
#include<QStringList>
#include"editDialog.h"
#include<QListWidget>

using namespace std;

class Student
{
protected:
    QString noOfSub;
    QString fname;
    QString lname;
    QString level;//fixed
    QString campus;//fixed
    QString year;
    QString sem;
    QString symbolNo;
    QString campusRoll;
    QString programme;//fixed

public:
    Student();
    void getData();
};


//-------------------------SUBJECT INFO---------------------------------//
class SubjectInfo : public Student
{
protected:
    QStringList subCodes;
    QStringList subNames;
    QStringList fullTheoryMarks;
    QStringList fullAsstMarks;
    QStringList theoryPassMarks;
    QStringList asstPassMarks;

public:
    SubjectInfo();
    void getSubInfo();
};


//----------------------------ObtainedMarks--------------------------------//
class ObtainedMarks : public SubjectInfo
{
private:
    QStringList asstMarks;
    QStringList theoryMarks;

public:
    ObtainedMarks();
    void getMarksData();
    void writeToFile(int yr, int semNo, Ui::EditDialog &dlg);
    void readFromFile(QString name, QListWidget &lst);
    void readFromFile(QString str);
    void readFromFile(QString str, int flag, int &pos);
    friend class MarkSheet;
    friend class EditDialog;
    friend QDataStream & operator << (QDataStream &stream, ObtainedMarks &a);
    friend QDataStream & operator >> (QDataStream &stream, ObtainedMarks &a);
};
#endif // STUDENTINFO_H
