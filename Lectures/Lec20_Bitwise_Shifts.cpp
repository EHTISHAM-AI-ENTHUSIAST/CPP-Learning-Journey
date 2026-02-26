//this program will manipulate bitwise operators
//this program will perform left shift and right shift operations


#include <iostream>
using namespace std;

main()

{
    int num , result;


    cout << "Enter a number: ";
    cin >> num;
    cout << endl;

    cout << "number before any operation: " << num << endl <<endl;

    result = num << 1;
    cout << "number after left shift operation by 1: " << result << endl << endl;

    result = num >> 1;
    cout << "number after right shift operation by 1: " << result << endl;

   
    return 0;
}
