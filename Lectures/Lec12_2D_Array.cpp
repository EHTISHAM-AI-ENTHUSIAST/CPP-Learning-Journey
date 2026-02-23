#include <iostream>
using namespace std;

main()

{
    int arr[2][3] = {{11, 22, 33}, {44, 55, 66}};
      
    for (int row = 0; row < 3; row++)
    {

        for (int col = 0; col < 2; col++)
        {
            cout << arr[1][2] << " ";
        }
        cout << endl;
    }
    return 0;
}
