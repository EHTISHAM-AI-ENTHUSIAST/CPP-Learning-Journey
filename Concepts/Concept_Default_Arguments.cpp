#include <iostream>
using namespace std;

// Function with default arguments
// Default values are provided in the function declaration
// When calling the function, if an argument is not provided,
// the default value will be used

void printMessage(string message = "Hello, World!");

// Function with multiple default arguments
// Default arguments must be specified from right to left
int calculatePower(int base, int exponent = 2);

// Function to display user info with defaults
void displayUserInfo(string name, int age = 18, string country = "Unknown");

int main()
{
    cout << "=== Default Arguments Demo ===" << endl;
    cout << endl;

    // Calling function without argument - uses default
    cout << "Calling printMessage() without argument:" << endl;
    printMessage();
    cout << endl;

    // Calling function with argument - overrides default
    cout << "Calling printMessage() with argument:" << endl;
    printMessage("Welcome to C++!");
    cout << endl;

    // Calculate square (using default exponent = 2)
    cout << "3 squared = " << calculatePower(3) << endl;

    // Calculate cube (overriding default exponent)
    cout << "2 cubed = " << calculatePower(2, 3) << endl;
    cout << endl;

    // Display user info with different argument combinations
    cout << "User 1 (all defaults except name):" << endl;
    displayUserInfo("Alice");

    cout << endl << "User 2 (custom age, default country):" << endl;
    displayUserInfo("Bob", 25);

    cout << endl << "User 3 (all custom values):" << endl;
    displayUserInfo("Charlie", 30, "USA");

    return 0;
}

void printMessage(string message)
{
    cout << "Message: " << message << endl;
}

int calculatePower(int base, int exponent)
{
    int result = 1;
    for(int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

void displayUserInfo(string name, int age, string country)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Country: " << country << endl;
}
