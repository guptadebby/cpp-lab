#include <iostream>
using namespace std;

// Function demonstrating call by value
void swapNumbers(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "\nInside the function:";
    cout << "\na = " << a;
    cout << "\nb = " << b;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "\nBefore function call:";
    cout << "\nx = " << x;
    cout << "\ny = " << y;

    // Calling the function by value
    swapNumbers(x, y);

    cout << "\n\nAfter function call:";
    cout << "\nx = " << x;
    cout << "\ny = " << y;

    return 0;
}