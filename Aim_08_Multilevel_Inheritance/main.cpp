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

    void displayStudentDetails()
    {
        cout << "\nRoll Number: " << rollNo << endl;
        cout << "Student Name: " << name << endl;
    }
};

// Derived class
class Exam : public Student
{
protected:
    int marks[6];

public:
    void inputMarks()
    {
        cout << "\nEnter marks in six subjects (out of 100):\n";

        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": ";

            while (!(cin >> marks[i]) || marks[i] < 0 || marks[i] > 100)
            {
                cout << "Invalid marks. Enter a value between 0 and 100: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }

    void displayMarks()
    {
        cout << "\n--- Subject Marks ---\n";

        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": "
                 << marks[i] << "/100" << endl;
        }
    }
};

// Derived class from Exam
class Result : public Exam
{
private:
    int totalMarks;
    double percentage;

public:
    void calculateResult()
    {
        totalMarks = 0;

        for (int i = 0; i < 6; i++)
        {
            totalMarks += marks[i];
        }

        percentage = (totalMarks / 600.0) * 100;
    }

    void displayResult()
    {
        cout << "\n========== STUDENT RESULT ==========\n";

        displayStudentDetails();
        displayMarks();

        cout << "\nTotal Marks: " << totalMarks << "/600";
        cout << "\nPercentage: " << fixed << setprecision(2)
             << percentage << "%" << endl;

        cout << "====================================\n";
    }
};

int main()
{
    Result student;

    cout << "===== STUDENT EXAMINATION SYSTEM =====\n";

    student.inputStudentDetails();
    student.inputMarks();
    student.calculateResult();
    student.displayResult();

    return 0;
}