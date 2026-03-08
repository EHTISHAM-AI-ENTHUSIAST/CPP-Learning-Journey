#include <iostream>
using namespace std;

int myfuction(int);

int main()

{
    int a;
    a = 10;
    cout << "The value of A in Main Section is: ";
    cout << a;
    cout << endl;

    cout << "The value returned by Function is: ";
    cout << myfuction(a);
    cout << endl;

    return 0;
}

int myfuction(int a)
{
    return a = 20;
}