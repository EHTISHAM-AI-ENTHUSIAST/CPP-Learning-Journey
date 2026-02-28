#include <iostream>
using namespace std;

#define DEBUG              // 👈 is line ko comment / uncomment kar ke dekho

int main()
{
    int x = 10;
    int y = 20;

#ifdef DEBUG
    cout << "DEBUG MODE ON\n";
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
#endif

    cout << "Sum = " << x + y << endl;

    return 0;
}


// this program mein humne ek DEBUG macro define kiya hai.
// Agar DEBUG macro defined hai, toh program debug information print karega.