#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
using namespace std;

// Base class
class Student
{
protected:
    int rollNo;
    string name;

public:
    void inputStudentDetails()
    {
        cout << "Enter Roll Number: ";

        while (!(cin >> rollNo) || rollNo <= 0)
        {
            cout << "Invalid roll number. Enter a positive number: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Student Name: ";
        getline(cin, name);
    }

    void displayStudentDetails() const
    {
        cout << "\nRoll Number: " << rollNo << endl;
        cout << "Student Name: " << name << endl;
    }
};

// Derived class with virtual inheritance
class TheoryExam : virtual public Student
{
protected:
    double theoryMarks[3];

public:
    void inputTheoryMarks()
    {
        cout << "\nEnter marks for three theory subjects (out of 100):\n";

        for (int i = 0; i < 3; i++)
        {
            cout << "Theory Subject " << i + 1 << ": ";

            while (!(cin >> theoryMarks[i]) ||
                   theoryMarks[i] < 0 || theoryMarks[i] > 100)
            {
                cout << "Invalid marks. Enter marks between 0 and 100: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }

    double getTheoryTotal() const
    {
        return theoryMarks[0] + theoryMarks[1] + theoryMarks[2];
    }
};

// Derived class with virtual inheritance
class PracticalExam : virtual public Student
{
protected:
    double practicalMarks[2];

public:
    void inputPracticalMarks()
    {
        cout << "\nEnter marks for two practical subjects (out of 100):\n";

        for (int i = 0; i < 2; i++)
        {
            cout << "Practical Subject " << i + 1 << ": ";

            while (!(cin >> practicalMarks[i]) ||
                   practicalMarks[i] < 0 || practicalMarks[i] > 100)
            {
                cout << "Invalid marks. Enter marks between 0 and 100: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }

    double getPracticalTotal() const
    {
        return practicalMarks[0] + practicalMarks[1];
    }
};

// Derived class from TheoryExam and PracticalExam
class Result : public TheoryExam, public PracticalExam
{
public:
    void calculateResult()
    {
        double totalMarks = getTheoryTotal() + getPracticalTotal();

        double percentage = (totalMarks / 500.0) * 100;

        cout << "\n========== STUDENT RESULT ==========\n";

        displayStudentDetails();

        cout << "\nTheory Marks: " << getTheoryTotal() << "/300";
        cout << "\nPractical Marks: " << getPracticalTotal() << "/200";

        cout << "\nTotal Marks: " << totalMarks << "/500";

        cout << "\nPercentage: "
             << fixed << setprecision(2)
             << percentage << "%" << endl;

        cout << "====================================\n";
    }
};

int main()
{
    Result student;

    cout << "===== STUDENT MARKS CALCULATION =====\n";

    student.inputStudentDetails();
    student.inputTheoryMarks();
    student.inputPracticalMarks();

    student.calculateResult();

    return 0;
}
