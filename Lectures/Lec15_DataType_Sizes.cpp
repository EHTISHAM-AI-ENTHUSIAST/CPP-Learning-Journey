#include <iostream>
using namespace std;
int main()
{

    // checking size of data type

    cout << 0 << " . " << sizeof(long) << endl;
    cout << 1 << " . " << sizeof(int) << endl;
    cout << 2 << " . " << sizeof(float) << endl;
    
    cout << 3 << " . "<<  sizeof(char) << endl;
    cout << 4 << " . "<<  sizeof(bool) << endl;

    cout << 5 << " . "<<  sizeof(wchar_t) << endl;
    cout << 6 << " . "<<  sizeof(short) << endl;
    
    cout << 8 << " . "<<  sizeof(double) << endl;
    cout << 9 << " . "<<  sizeof(void *) << endl;

    
    return 0;
}