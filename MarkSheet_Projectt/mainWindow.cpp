#include "mainWindow.h"
#include"studentInfo.h"
#include"editDialog.h"
#include<iostream>
#include<QDebug>
#include<QFile>
#include<QDataStream>


MainWindow::MainWindow() : QDialog()
{
    ui.setupUi(this);
    QObject::connect(ui.goButton, SIGNAL(clicked()), this, SLOT(search()));
    QObject::connect(ui.Add, SIGNAL(clicked()), this, SLOT(addData()));
    QObject::connect(ui.Edit, SIGNAL(clicked()), this, SLOT(editData()));
    QObject::connect(ui.Delete, SIGNAL(clicked()), this, SLOT(deleteData()));
    QObject::connect(ui.viewMarks, SIGNAL(clicked()), this, SLOT(marksheet()));
}


void MainWindow::marksheet()
{
    if(!ui.studentList->currentItem())
        return;

    MarkSheet m(this);
    ObtainedMarks b;
    b.readFromFile(ui.studentList->currentItem()->text());
    m.viewMarksheet(b);
    m.exec();
}


void MainWindow::search()
{
    ObtainedMarks temp;
    temp.readFromFile(ui.searchField->text(), *ui.studentList);

}


void MainWindow::addData()
{
    EditDialog dlg(0, this);
    dlg.exec();
}


void MainWindow::editData()
{
    int pos;
    ObtainedMarks temp;
    if(ui.studentList->currentItem()){
        temp.readFromFile(ui.studentList->currentItem()->text(), 1, pos);
        EditDialog dlg(1, this);
        dlg.exec();
    }
    qDebug() << pos;

}


void MainWindow::deleteData()
{

}
