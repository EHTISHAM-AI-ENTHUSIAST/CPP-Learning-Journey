#include <iostream>
using namespace std;

int main()

{
   int sum = 0, number = 1, upperLimit;

    cout << "Please enter upper limit: ";
    cin >> upperLimit;

    while (number <= upperLimit)
    {
        if ((number % 2) == 0)   // agar number 2 se divide hota hai
        {
            sum = sum + number;  // to usay sum me add karo
        }
        number = number + 1;
    }

    cout << "The sum of even numbers is " << sum;

    return 0;
}
