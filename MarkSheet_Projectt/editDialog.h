#ifndef EDITDIALOG_H
#define EDITDIALOG_H
#include<QDialog>
#include<ui_editdialog.h>
#include<studentInfo.h>

class EditDialog : public QDialog
{
    Q_OBJECT
public:
    EditDialog(int flag, QDialog *parent = 0);

public slots:
    void setForSem();
    void write2file();

private:
    Ui::EditDialog uiE;
};

#endif // EDITDIALOG_H
