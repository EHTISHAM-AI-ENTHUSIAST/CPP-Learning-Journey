#include <iostream>
using namespace std;

// Function overloading: Same function name with different parameter types
// Calculate area of rectangle (int parameters)
int calculateArea(int length, int width);

// Calculate area of rectangle (double parameters for precision)
double calculateArea(double length, double width);

// Calculate area of circle (double radius)
double calculateArea(double radius);

int main()
{
    int intLength = 10, intWidth = 5;
    double doubleLength = 10.5, doubleWidth = 5.3;
    double radius = 7.0;

    cout << "=== Function Overloading Demo ===" << endl;
    cout << endl;

    // Calling calculateArea with int parameters
    cout << "Rectangle Area (int): " << calculateArea(intLength, intWidth);
    cout << endl;

    // Calling calculateArea with double parameters
    cout << "Rectangle Area (double): " << calculateArea(doubleLength, doubleWidth);
    cout << endl;

    // Calling calculateArea with single double parameter (circle)
    cout << "Circle Area: " << calculateArea(radius);
    cout << endl;

    return 0;
}

// Calculate area of rectangle (int parameters)
int calculateArea(int length, int width)
{
    return length * width;
}

// Calculate area of rectangle (double parameters)
double calculateArea(double length, double width)
{
    return length * width;
}

// Calculate area of circle (double radius)
double calculateArea(double radius)
{
    return 3.14159 * radius * radius;
}
