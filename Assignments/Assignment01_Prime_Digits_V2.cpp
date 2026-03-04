#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    string studentID = "BC250200083";
    string studentName = "EHTISHAM ASHRAF";

    cout << "Student ID: " << studentID << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "\nDigit classification:\n\n";

    string numericPart = "250200083";

    int zeros = 0, evens = 0, odds = 0, primes = 0;

    for (int i = 0; i < numericPart.length(); i++)
    {
        int digit = numericPart[i] - '0';

        if (digit == 0)
        {
            cout << digit << " is Zero" << endl;
            zeros++;
        }
        else if (isPrime(digit))
        {
            cout << digit << " is Prime" << endl;
            primes++;
        }
        else if (digit % 2 == 0)
        {
            cout << digit << " is Even" << endl;
            evens++;
        }
        else
        {
            cout << digit << " is Odd" << endl;
            odds++;
        }
    }

    cout << "\nSummary:\n";
    cout << "Zeros: " << zeros << endl;
    cout << "Evens: " << evens << endl;
    cout << "Odds: " << odds << endl;
    cout << "Primes: " << primes << endl;

    return 0;
}
