#include <iostream>

#include "lec23note.h"

using namespace std;


main()

{
    int n1, n2, n3, n4;

    cout << "Enter 1st number: ";
    cin >> n1;
    cout << "Enter 2nd number: ";
    cin >> n2;

    n3 = add(n1, n2);
    cout << "The sum is: " << n3 << endl;
    n4 = sub(n1, n2);
    cout << "The difference is: " << n4 << endl;
    return 0;
}
