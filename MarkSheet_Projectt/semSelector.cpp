#include "semSelector.h"

SemSelector::SemSelector(QWidget *parent) : QDialog(parent)
{
    uiS.setupUi(this);
    QObject::connect(uiS.sem1, SIGNAL(clicked()), this, SLOT(showDialog()));
    QObject::connect(uiS.sem1, SIGNAL(clicked()), this, SLOT(showDialog()));
}


void SemSelector::showDialog()
{
    {
        EditDialog s1;
        switch(semNo)
        {
            case 1:
                s1.setUi(semNo);
                s1.exec();

            case 2:
                s1.setUi(semNo);
                s1.exec();
        }
    }

    this->close();

}
