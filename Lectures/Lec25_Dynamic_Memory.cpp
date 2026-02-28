//this program will calculate average age of class using dynamic memory allocation
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main() {
    int numstudent , i , totalage , *iptr , *sptr;

    cout << "Enter number of students in class: ";

    cin >> numstudent;

    iptr = (int *) malloc (numstudent * sizeof(int));

    if (iptr == NULL) {
        cout << "Memory allocation failed" << endl;
        return 1;
    }

    sptr = iptr;
    totalage = 0;

    for (i = 0; i < numstudent; i++) {
        cout << "Enter age of student " << (i + 1) << ": ";
        cin >> *sptr;
        totalage += *sptr;
        sptr++;
    }
    cout << "Average age of class is: " << (totalage / numstudent) << endl;
    free(iptr);
    
    return 0;
}