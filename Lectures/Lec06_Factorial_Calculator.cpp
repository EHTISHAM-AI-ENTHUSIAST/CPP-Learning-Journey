
#include <iostream>
using namespace std;

int main()

{
   int number, factorial = 1;

    cout << "Please enter a number: ";
    cin >> number;

    while (number > 1)
    {
        factorial = factorial * number;
        number = number - 1;
    }

    cout << "The factorial is " << factorial;

    return 0;
}
