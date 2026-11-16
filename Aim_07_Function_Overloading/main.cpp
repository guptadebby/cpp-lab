#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.141592653589793;

// Function to calculate area of circle
double AREA(double radius)
{
    return PI * radius * radius;
}

// Function to calculate area of rectangle
double AREA(double length, double breadth)
{
    return length * breadth;
}

// Function to calculate area of triangle
double AREA(double base, double height, char)
{
    return 0.5 * base * height;
}

int main()
{
    double radius, length, breadth, base, height;

    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;

    cout << "Enter base and height of triangle: ";
    cin >> base >> height;

    // Validate inputs
    if (radius <= 0 || length <= 0 || breadth <= 0 ||
        base <= 0 || height <= 0)
    {
        cout << "Dimensions must be positive.\n";
        return 1;
    }

    cout << fixed << setprecision(2);

    cout << "\n--- Area Calculations ---\n";

    cout << "Area of Circle: "
         << AREA(radius) << endl;

    cout << "Area of Rectangle: "
         << AREA(length, breadth) << endl;

    cout << "Area of Triangle: "
         << AREA(base, height, 'T') << endl;

    return 0;
}