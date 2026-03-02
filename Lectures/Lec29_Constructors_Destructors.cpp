#include <iostream>
using namespace std;

// Class Definition
class Date
{
private:
    int day;
    int month;
    int year;

public:
    // Default Constructor
    Date()
    {
        day = 22;
        month = 12;
        year = 2022;
        cout << "Default Constructor Called" << endl;
    }

    // Two-parameter Constructor
    Date(int d, int m)
    {
        day = d;
        month = m;
        year = 2023;
        cout << "Two-Parameter Constructor Called" << endl;
    }

    // Three-parameter Constructor
    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
        cout << "Three-Parameter Constructor Called" << endl;
    }

    // Destructor
    ~Date()
    {
        cout << "Destructor Called" << endl;
    }

    // Setter functions
    void setDay(int d)
    {
        day = d;
    }

    void setMonth(int m)
    {
        month = m;
    }

    void setYear(int y)
    {
        year = y;
    }

    // Getter functions
    int getDay()
    {
        return day;
    }

    int getMonth()
    {
        return month;
    }

    int getYear()
    {
        return year;
    }

    // Display function
    void display()
    {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

// Main Program
int main()
{
    // Object using default constructor
    Date date1;

    // Object using two-parameter constructor
    Date date2(12, 12);

    // Object using three-parameter constructor
    Date date3(25, 12, 2014);

    cout << endl;

    // Display all dates
    date1.display();
    date2.display();
    date3.display();

    return 0;
}
