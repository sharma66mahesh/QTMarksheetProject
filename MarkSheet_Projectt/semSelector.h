#ifndef SEMSELECTOR_H
#define SEMSELECTOR_H
#include<ui_semSelector.h>
#include<QDialog>
#include"editDialog.h"

class SemSelector : public QDialog
{
    Q_OBJECT
public:
    SemSelector(QWidget *parent = 0);

public slots:
    void showDialog();

private:
    Ui::semSelectForm uiS;
};

#endif // SEMSELECTOR_H
