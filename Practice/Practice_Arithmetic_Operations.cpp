#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // integer variables
    int a = 23;
    int b = 5;
    int c;

    // floating-point variables
    double x = 12.5;
    double y = 2.25;
    double z;

    cout << "Operations with integers" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    c = a + b;
    cout << "a + b = " << c << endl;

    c = a - b;
    cout << "a - b = " << c << endl;

    c = a * b;
    cout << "a * b = " << c << endl;

    c = a / b; // integer division
    cout << "a / b = " << c << " (integer division)" << endl;

    c = a % b;
    cout << "a % b = " << c << endl;

    // show non-integer division as well
    cout << "a / b (as double) = " << static_cast<double>(a) / b << endl;

    cout << endl << "Operations with decimal numbers" << endl;
    cout << fixed << setprecision(2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    z = x + y;
    cout << "x + y = " << z << endl;

    z = x - y;
    cout << "x - y = " << z << endl;

    z = x * y;
    cout << "x * y = " << z << endl;

    z = x / y;
    cout << "x / y = " << z << endl;

    return 0;
}