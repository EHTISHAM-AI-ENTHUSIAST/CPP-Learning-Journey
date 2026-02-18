
#include <iostream>
using namespace std;

int main()

{
  int counter, number, maxMultiplier;

    cout << "Enter number for table: ";
    cin >> number;

    cout << "Enter maximum multiplier: ";
    cin >> maxMultiplier;

    for (counter = 1; counter <= maxMultiplier; counter++) {
        cout << number << " x " << counter << " = " << number * counter << endl;}
    return 0;
}
