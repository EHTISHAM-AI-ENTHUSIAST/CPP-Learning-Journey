// Relationship between-Pointers and Arrays

#include <iostream>
using namespace std;
int main()
{
    int y[10];
    int *yptr;

    yptr = y; // yptr now points to the first element of array y


    cout << "Address of yptr " << yptr << endl;

    yptr++ ; // Incrementing the pointer to point to the next integer
    cout << "address of yptr + 1: " << yptr  << endl;

    cout << "Value at yptr + 1: " << *yptr << endl;
    

    return 0;
}