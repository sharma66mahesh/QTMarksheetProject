#ifndef MARKSHEET_H
#define MARKSHEET_H

#include "ui_markSheet.h"
#include<QDialog>
#include"studentInfo.h"


class MarkSheet : public QDialog
{
public:
    MarkSheet(QWidget *parent = 0);


private:
    Ui::marksheetForm uim;

public:
     void viewMarksheet(ObtainedMarks & info);
};

#endif // MARKSHEET_H
