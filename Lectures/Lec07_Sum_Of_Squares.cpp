
#include <iostream>
using namespace std;

int main()

{
    int i, n, sum = 0;

    cout << "Enter a positive number: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum += i * i; // same as sum = sum + (i * i);
    }

    cout << "The sum of first " << n << " squares is " << sum;
    return 0;
}
