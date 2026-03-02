#include <iostream>
using namespace std;

// Class definition
class Date
{
public:
    // Public member functions
    void display();
    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);

private:
    // Private data members
    int day;
    int month;
    int year;
};

// Definition of display function
void Date::display()
{
    cout << "Date is: " << day << ":" << month << ":" << year << endl;
}

// Definition of setDay function
void Date::setDay(int d)
{
    day = d;
}

// Definition of setMonth function
void Date::setMonth(int m)
{
    month = m;
}

// Definition of setYear function
void Date::setYear(int y)
{
    year = y;
}

// Main program
int main()
{
    // Create an object of the Date class
    Date d1;

    // Set the date using member functions
    d1.setDay(11);
    d1.setMonth(11);
    d1.setYear(2021);

    // Display the date
    d1.display();

    // Create another object
    Date d2;
    d2.setDay(22);
    d2.setMonth(11);
    d2.setYear(2025);
    d2.display();

    return 0;
}
