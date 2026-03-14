#include <iostream>
using namespace std;

// Inline Functions in C++
// An inline function is a compiler hint (not a command) that suggests
// the compiler to insert the function's code at the call site instead
// of making a regular function call. This reduces function call overhead.
// Best used for small, frequently-called functions.

// Inline function to calculate square
inline int square(int x)
{
    return x * x;
}

// Inline function to find maximum of two numbers
inline int max(int a, int b)
{
    return (a > b) ? a : b;
}

// Inline function to calculate cube
inline int cube(int x)
{
    return x * x * x;
}

// Regular function for comparison (compiler may or may not inline)
int regularSquare(int x)
{
    return x * x;
}

int main()
{
    cout << "=== Inline Functions Demo ===" << endl;
    cout << endl;

    int num = 5;

    // Using inline square function
    cout << "Square of " << num << " = " << square(num) << endl;

    // Using inline max function
    cout << "Max of 10 and 20 = " << max(10, 20) << endl;

    // Using inline cube function
    cout << "Cube of " << num << " = " << cube(num) << endl;
    cout << endl;

    // Demonstrating multiple calls (where inline shines)
    cout << "Sum of squares from 1 to 5:" << endl;
    int sum = 0;
    for(int i = 1; i <= 5; i++)
    {
        sum += square(i);
        cout << "  " << i << "^2 = " << square(i) << endl;
    }
    cout << "Total sum = " << sum << endl;
    cout << endl;

    // Comparison with regular function
    cout << "Inline vs Regular function call:" << endl;
    cout << "Inline square(4) = " << square(4) << endl;
    cout << "Regular square(4) = " << regularSquare(4) << endl;
    cout << endl;

    // Key points about inline functions
    cout << "=== Key Points ===" << endl;
    cout << "- Inline is a HINT, not a command to compiler" << endl;
    cout << "- Best for small functions (1-3 lines)" << endl;
    cout << "- Reduces function call overhead" << endl;
    cout << "- Compiler may ignore inline for large functions" << endl;
    cout << "- Modern compilers auto-inline when beneficial" << endl;

    return 0;
}
