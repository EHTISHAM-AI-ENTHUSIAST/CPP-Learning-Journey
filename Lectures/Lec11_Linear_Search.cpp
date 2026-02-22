#include <iostream>
using namespace std;

int main()

{
    int z, i;
    int a[100];

    for (i = 0; i < 100; i++)
    {
        a[i] = i + 1;
    }

    cout << "Enter a positive integer between 1 and 100: ";
    cin >> z;

    int found = 0;
    for (i = 0; i < 100; i++)
    {
        if (a[i] == z)
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        cout << "The number " << z << " was found in the array." << endl;
    else
        cout << "The number " << z << " was not found in the array." << endl;

    return 0;
}
