#include <iostream>

using namespace std;

int main()
{
    // declaration of variables, the age will be in whole numbers

    int age1, age2, age3;

    int TotalAge, AverageAge;

    // take ages of the students from the user

    cout << "Please enter the age of student 1 : ";

    cin >> age1;

    cout << "Please enter the age of student 2 : ";

    cin >> age2;

    cout << "Please enter the age of student 3 : ";
    cin >> age3;


    // calculate the total age and average age

    TotalAge = age1 + age2 + age3 ;

    AverageAge = TotalAge / 10;

    // Display the result ( average age )

    cout << "Average age of class is : " << AverageAge;
    return 0;
}
