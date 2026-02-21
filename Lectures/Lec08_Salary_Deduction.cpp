
#include <iostream>
using namespace std;

int main()

{
    int salary;
    float deduction, netPayable;

    cout << "Please enter the salary: ";
    cin >> salary;

    switch (salary / 10000)
    { // divide to make categories
    case 0:
        deduction = 0;
        break;

    case 1:
        deduction = 1000;
        break;

    default:
        deduction = salary * 7 / 100;
    }

    netPayable = salary - deduction;

    cout << "Net Payable = " << salary << " - " << deduction << " = " << netPayable;
    return 0;
}
