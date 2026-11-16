#include <iostream>
#include <iomanip>
using namespace std;

class Shape
{
private:
    double radius, length, width;

public:

    // Parameterized constructor
    Shape(double r, double l, double w)
    {
        radius = r;
        length = l;
        width = w;

        cout << "\nConstructor called. Object created.\n";
    }

    // Function to calculate perimeter of rectangle
    double rectanglePerimeter()
    {
        return 2 * (length + width);
    }

    // Function to calculate circumference of circle
    double circlePerimeter()
    {
        return 2 * 3.14159 * radius;
    }

    // Destructor
    ~Shape()
    {
        cout << "\nDestructor called. Object destroyed.\n";
    }
};

int main()
{
    double r, l, w;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter length of rectangle: ";
    cin >> l;

    cout << "Enter width of rectangle: ";
    cin >> w;

    if (r <= 0 || l <= 0 || w <= 0)
    {
        cout << "Dimensions must be positive.";
        return 1;
    }

    // Creating an object of Shape class
    Shape obj(r, l, w);

    cout << fixed << setprecision(2);

    cout << "\nPerimeter of Rectangle: "
         << obj.rectanglePerimeter();

    cout << "\nCircumference of Circle: "
         << obj.circlePerimeter();

    return 0;
}