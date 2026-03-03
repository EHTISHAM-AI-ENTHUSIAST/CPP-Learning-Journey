#include <iostream>
using namespace std;

// Global variable
int myNumber = 0;

// Function returning a reference
int& nam() {
    return myNumber;
}

int main() {
    int i; // Local variable

    // Assign value returned by nam() to i (copy)
    i = nam();

    cout << "The value of i: " << i << endl;
    cout << "The value of myNumber: " << myNumber << endl;

    // Modify myNumber using reference return
    nam() = 200;

    cout << "After assigning the value of myNumber: " << myNumber << endl;

    return 0;
}
