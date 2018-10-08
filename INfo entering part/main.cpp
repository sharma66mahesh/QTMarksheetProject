#include<iostream>
#include<fstream>


using namespace std;

class Student
{
protected:
    string name;
    const string level;
    const string campus;
    int year;
    int sem;
    int symbolNo;
    string campusRoll;
    const string programme;

public:
    Student(int yr, int part){}// to create empty object to hold data read from a file


    Student() : level("Bachelors"), campus("Pulchowk"), programme("Computer Engineering")
    {
        cout << "Enter Name:\t";
        cin >> name;
        cout << "Enter year:\t";
        cin >> year;
        cout << "Enter sem:\t";
        cin >> sem;
        cout << "Enter symbol number:\t";
        cin >> symbolNo;
        cout << "Enter Campus Roll:\t";
        cin >> campusRoll;
    }
};


//-------------------------SUBJECT INFO---------------------------------//
class SubjectInfo : public Student
{
protected:
    int number;
    string *subCodes;
    string *subNames;
    int *fullTheoryMarks;
    int *fullAsstMarks;
    int *theoryPassMarks;
    int *asstPassMarks;

public:
    SubjectInfo(int yr, int part) : Student(yr, part) //for reading from file
    {
        subCodes = new string [9];

        subNames = new string [9];

        fullTheoryMarks = new int [9];

        fullAsstMarks = new int [9];

        theoryPassMarks = new int [9];

        asstPassMarks = new int[9];
    }


    SubjectInfo() : Student()
    {
        number = 0;

        if(year == 1 && sem == 1)
        {
            number = 9;

            subCodes = new string [number] {"SH401", "CT401", "CT401", "ME401", "SH452", "SH452", "CE451", "EE451", "EE451"};

            subNames = new string [number] {"Mathematics I", "Computer Programming", "Computer Programming PRACTICAL",
            "Engineering Drawing I PRACTICAL", "Engineering Physics", "Engineering Physics PRACTICAL",
            "Applied Mechanics", "Basic Electrical Engineering", "Basic Electrical Engineering PRACTICAL"};

            fullTheoryMarks = new int [number] {80, 80, 0, 40, 80, 30, 80, 80, 0};

            fullAsstMarks = new int [number] {20, 20, 50, 60, 20, 20, 20, 20, 25};

            theoryPassMarks = new int [number] {32, 32, 0, 16, 32, 12, 32, 32, 0};

            asstPassMarks = new int[number] {8, 8, 20, 24, 8, 8, 8, 8, 10};
        }
    }

};


//----------------------------ObtainedMarks--------------------------------//
class ObtainedMarks : public SubjectInfo
{
private:
    int *asstMarks;
    int *theoryMarks;

public:
    ObtainedMarks(int yr, int part) : SubjectInfo(yr, part)
    {
        asstMarks = new int [9];
        theoryMarks = new int [9];
    }


    ObtainedMarks() : SubjectInfo()
    {
            asstMarks = new int [number];
            theoryMarks = new int [number];
    }


    void getMarks()
    {
        /*if(sem != 1 || year != 1)
            throw this;*/
            cout << "------------------Enter marks for the following subjects----------------\nEnter 0 for non existing ones";

            int i =0;

            do
            {
                cout << *(subNames + i) << endl;
                cout << "Theory Marks\t";
                cin >> *(theoryMarks + i);
                cout << "Assessment Marks\t";
                cin >> *(asstMarks + i);
                i++;
            }while(i < number);

    }

    static void writeToFile(ObtainedMarks &a)
    {
        ofstream out_file("record.txt", ios::out | ios::binary);

        out_file.write(reinterpret_cast<char *> (&a), sizeof(a));
        out_file.close();
    }

    static void readFromFile(ObtainedMarks &b)
    {
        ifstream in_file("record.txt", ios::out | ios::binary);
        in_file.seekg(ios::beg);

        while(!in_file.eof() && in_file.good()){
            in_file.read(reinterpret_cast<char *> (&b), sizeof(b));
        }
        in_file.close();
    }

    void showData()
    {
        cout << *(subNames + 1) << '\t' << *(theoryMarks + 1);
    }
};

int main()
{
   // try
    //{
        ObtainedMarks a;
        a.getMarks();
        ObtainedMarks::writeToFile(a);

        ObtainedMarks b(1, 1);

        ObtainedMarks::readFromFile(b);

        b.showData();

   // }


  /*  catch(ObtainedMarks *)
    {
        cout << "The program works only for sem 1 currently";
    }*/
}

