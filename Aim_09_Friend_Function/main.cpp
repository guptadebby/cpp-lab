#include <iostream>
using namespace std;

// Forward declaration
class Number2;

// First class
class Number1
{
private:
    int num1;

public:
    void input()
    {
        cout << "Enter first number: ";
        cin >> num1;
    }

    void display()
    {
        cout << num1;
    }

    // Declaring friend function
    friend void swapNumbers(Number1&, Number2&);
};

// Second class
class Number2
{
private:
    int num2;

public:
    void input()
    {
        cout << "Enter second number: ";
        cin >> num2;
    }

    void display()
    {
        cout << num2;
    }

    // Declaring friend function
    friend void swapNumbers(Number1&, Number2&);
};

// Friend function definition
void swapNumbers(Number1 &a, Number2 &b)
{
    int temp;

    temp = a.num1;
    a.num1 = b.num2;
    b.num2 = temp;
}

int main()
{
    Number1 obj1;
    Number2 obj2;

    // Input numbers
    obj1.input();
    obj2.input();

    cout << "\nBefore Swapping:\n";
    cout << "First number: ";
    obj1.display();

    cout << "\nSecond number: ";
    obj2.display();

    // Calling friend function
    swapNumbers(obj1, obj2);

    cout << "\n\nAfter Swapping:\n";
    cout << "First number: ";
    obj1.display();

    cout << "\nSecond number: ";
    obj2.display();

    cout << endl;

    return 0;
}