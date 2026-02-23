#include <iostream>
using namespace std;

int main()
{
    int var = 45;
    int *ptr = &var;
    
    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;

    cout << "Value of ptr (Address of var): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    
    return 0;
}
