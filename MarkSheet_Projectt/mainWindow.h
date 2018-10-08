#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QDialog>
#include<QString>
#include<QByteArray>
#include "ui_mainwindow.h"
#include "markSheet.h"

class MainWindow : public QDialog
{
    Q_OBJECT
public:
    MainWindow();
    void displayItem(ObtainedMarks &item);

public slots:
   // void openMarksWindow();
    void search();
    void addData();
    void editData();
    void deleteData();
    void marksheet();

private:
    Ui::MainWindowForm ui;
};

#endif // MAINWINDOW_H
