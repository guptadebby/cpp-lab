#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class Person
{
private:
    char name[64];
    int age;
    char address[64];

    double basicSalary;
    double hra, da, pf;
    double grossSalary, totalSalary;

public:

    // Parameterized constructor
    Person(const char personName[], int personAge,
           const char personAddress[], double salary)
    {
        strncpy(name, personName, 63);
        name[63] = '\0';

        strncpy(address, personAddress, 63);
        address[63] = '\0';

        age = personAge;
        basicSalary = salary;

        // Salary components
        hra = basicSalary * 0.20;
        da = basicSalary * 0.10;
        pf = basicSalary * 0.12;

        grossSalary = basicSalary + hra + da;
        totalSalary = grossSalary - pf;
    }

    // Function to access age
    int getAge() const
    {
        return age;
    }

    // Function to access name
    const char* getName() const
    {
        return name;
    }

    // Function to display salary slip
    void displaySalarySlip() const
    {
        cout << "\n========== SALARY SLIP ==========\n";

        cout << "Name           : " << name << endl;
        cout << "Age            : " << age << endl;
        cout << "Address        : " << address << endl;

        cout << "---------------------------------\n";

        cout << "Basic Salary   : Rs. " << basicSalary << endl;
        cout << "HRA (20%)      : Rs. " << hra << endl;
        cout << "DA (10%)       : Rs. " << da << endl;
        cout << "Gross Salary   : Rs. " << grossSalary << endl;
        cout << "PF (12%)       : Rs. " << pf << endl;

        cout << "---------------------------------\n";

        cout << "Net Salary     : Rs. " << totalSalary << endl;

        cout << "=================================\n";
    }
};

// Inline function to find youngest and eldest persons
inline void findYoungestAndEldest(
    const Person persons[], int size,
    int& youngestIndex, int& eldestIndex)
{
    youngestIndex = 0;
    eldestIndex = 0;

    for (int i = 1; i < size; i++)
    {
        if (persons[i].getAge() < persons[youngestIndex].getAge())
            youngestIndex = i;

        if (persons[i].getAge() > persons[eldestIndex].getAge())
            eldestIndex = i;
    }
}

// Function to input person details and create an object
Person inputPerson(int number)
{
    char name[64], address[64];
    int age;
    double salary;

    cout << "\nEnter details of Person " << number << endl;

    cout << "Name: ";
    cin >> ws;
    cin.getline(name, 64);

    cout << "Age: ";
    cin >> age;

    cout << "Address: ";
    cin >> ws;
    cin.getline(address, 64);

    cout << "Basic Salary: ";
    cin >> salary;

    return Person(name, age, address, salary);
}

int main()
{
    const int SIZE = 10;

    cout << "===== PERSON DETAILS =====\n";

    // Array of 10 Person objects
    Person people[SIZE] = {
        inputPerson(1),
        inputPerson(2),
        inputPerson(3),
        inputPerson(4),
        inputPerson(5),
        inputPerson(6),
        inputPerson(7),
        inputPerson(8),
        inputPerson(9),
        inputPerson(10)
    };

    // Part A: Find youngest and eldest persons
    int youngest, eldest;

    findYoungestAndEldest(people, SIZE, youngest, eldest);

    cout << "\n===== AGE DETAILS =====\n";

    cout << "Youngest Person: "
         << people[youngest].getName()
         << " | Age: "
         << people[youngest].getAge()
         << endl;

    cout << "Eldest Person: "
         << people[eldest].getName()
         << " | Age: "
         << people[eldest].getAge()
         << endl;

    // Part B: Generate salary slips
    cout << fixed << setprecision(2);

    cout << "\n===== SALARY SLIPS =====\n";

    for (int i = 0; i < SIZE; i++)
    {
        people[i].displaySalarySlip();
    }

    return 0;
}