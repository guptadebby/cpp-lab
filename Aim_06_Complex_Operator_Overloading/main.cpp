#include <iostream>
using namespace std;

class complex
{
private:
    double real, imag;

public:

    // Parameterized constructor
    complex(double r = 0, double i = 0)
    {
        real = r;
        imag = i;
    }

    // Prefix increment operator
    complex& operator++()
    {
        ++real;
        ++imag;
        return *this;
    }

    // Postfix increment operator
    complex operator++(int)
    {
        complex temp = *this;
        ++(*this);
        return temp;
    }

    // Prefix decrement operator
    complex& operator--()
    {
        --real;
        --imag;
        return *this;
    }

    // Postfix decrement operator
    complex operator--(int)
    {
        complex temp = *this;
        --(*this);
        return temp;
    }

    // Binary addition operator
    complex operator+(const complex& c) const
    {
        return complex(real + c.real, imag + c.imag);
    }

    // Binary subtraction operator
    complex operator-(const complex& c) const
    {
        return complex(real - c.real, imag - c.imag);
    }

    // Display complex number
    void display() const
    {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }
};

int main()
{
    double r1, i1, r2, i2;

    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> r2 >> i2;

    complex c1(r1, i1);
    complex c2(r2, i2);

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    // Binary operator overloading
    cout << "\nAddition: ";
    (c1 + c2).display();

    cout << "Subtraction: ";
    (c1 - c2).display();

    // Unary operator overloading
    complex temp = c1;

    cout << "\nPrefix Increment (++): ";
    (++temp).display();

    temp = c1;

    cout << "Prefix Decrement (--): ";
    (--temp).display();

    temp = c1;

    cout << "\nPostfix Increment (old value): ";
    (temp++).display();

    cout << "After Postfix Increment: ";
    temp.display();

    temp = c1;

    cout << "Postfix Decrement (old value): ";
    (temp--).display();

    cout << "After Postfix Decrement: ";
    temp.display();

    return 0;
}