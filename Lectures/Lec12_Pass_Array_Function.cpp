#include <iostream>
using namespace std;

void super(int x[], int y)
{
    for (int i = 0; i < y; i++)
    {
        cout << x[i] << endl;
    }
}

main()

{
    int arr1[5] = {10, 20, 30, 40, 50};
    int arr2[3] = {100, 200, 300};
    int arr3[4] = {7, 14, 21, 28};
    int arr4[2] = {1, 2};


    super(arr1, 5);
    super(arr2, 3);
    super(arr3, 4);
    return 0;
}
