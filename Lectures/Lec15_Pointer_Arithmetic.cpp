// Relationship between-Pointers and Arrays

#include <iostream>
using namespace std;
int main()
{
    int y[10] = {0, 5, 10, 15, 20, 25, 30, 35, 40, 45};
    int *yptr;
    yptr = y; // Assigning the address of first element of array.
    cout << "Address of yptr " << yptr << endl;

    cout << "Accessing 6th element of array as y[5] =" << y[5] << endl;
    cout << "Accessing 6th element of array using pointer arithmetic *(yptr + 5) = " << *(yptr + 5) << endl;
    cout << "Accessing 6th element of array using pointer offset yptr[5] = " << yptr[5] << endl;

    // note that yptr[5] is equivalent to *(yptr + 5) which are both equivalent to y[5]

    return 0;
}