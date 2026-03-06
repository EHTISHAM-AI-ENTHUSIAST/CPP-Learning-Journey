// this program calculates area,circumference and diameter of circle
#include <iostream>
using namespace std;
int main()
{
    float radius, diameter, circumference, area;

    cout << "Enter radius: ";
    cin >> radius;

    diameter = radius * 2;
    circumference = radius * 3.14 * 2;
    area = 3.14 * radius * radius;

    cout << "Value of radius = " << radius << endl;
    cout << "Value of diameter = " << diameter << endl;
    cout << "Value of circumference = " << circumference << endl;
    cout << "Value of area = " << area << endl;

    return 0;
}
// end of program