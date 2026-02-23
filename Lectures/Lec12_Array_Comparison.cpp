#include <iostream>
using namespace std;

int main()

{
    int num1[3], num2[3], i, equal = 1;

    cout << "Enter 3 integers for the first array: ";
    for (i = 0; i < 3; i++)
    {
        cin >> num1[i];
    }

    cout << "Enter 3 integers for the second array: ";
    for (i = 0; i < 3; i++)
    {
        cin >> num2[i];
    }

    for (i = 0; i < 3; i++)
    {
        if (num1[i] != num2[i])
        {
            equal = 0;
            break;
        }
    }
    if (equal)
        cout << "The two arrays are equal." << endl;
    else
        cout << "The two arrays are not equal." << endl;

    return 0;
}
