#include <iostream>
using namespace std;

int main() 
{
    //this program prints date , time , line no and file name by using predefined macros
    cout << "Date: " << __DATE__ << endl;
    cout << "Time: " << __TIME__ << endl;
    cout << "Line Number: " << __LINE__ << endl;
    cout << "File Name: " << __FILE__ << endl;
    

    return 0;
}