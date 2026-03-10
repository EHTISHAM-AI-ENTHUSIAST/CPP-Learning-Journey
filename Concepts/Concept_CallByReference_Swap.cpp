#include <iostream>
using namespace std;

void swap(int &x, int &y);

int main()

{
    int a,b;
    a = 10;
    b=20;

    cout << "The value of A before Function Call is: ";
    cout << a;
    cout << endl;

    cout << "The value of B before Function Call is: ";
    cout << b;
    cout << endl;

    swap(a,b);

    cout << "The value of A after Function Call is: ";
    cout << a;  
    cout << endl;

    cout << "The value of B after Function Call is: ";
    cout << b;
    cout << endl;

    return 0;
}

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
