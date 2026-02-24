/* Program using the dereference pointer comparison */

#include <iostream>
using namespace std;
int main()
{
    int x, y, *xptr, *yptr;

    cout << " Please enter the value of x = ";
    cin >> x;

    cout << " Please enter the value of y = ";
    cin >> y;

    xptr = &x;
    yptr = &y;

    if (*xptr > *yptr)
        cout << " Value of x is greater than value of y " << endl;
    else if (*xptr < *yptr)
        cout << " Value of y is greater than value of x " << endl;
    else
        cout << " Values of x and y are equal " << endl;

return 0;
}