#include <iostream>
using namespace std;

int main()

{
    long sum, number;

    sum = 0;
    number = 1;

    while (number <= 1000)
    {
        sum = sum + number;
        number = number + 1;
    }

    cout << "The sum of first 1000 integers starting from 1 is " << sum;

    return 0;
}
