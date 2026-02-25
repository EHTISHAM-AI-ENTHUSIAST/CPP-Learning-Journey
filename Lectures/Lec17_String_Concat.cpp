//this program is for manipluation of strings using strcat and strncat functions

#include <iostream>
#include <string.h>
using namespace std;

main()

{
    char str1[20] = "welcome to ";
    char str2[] = "C++ programming";
    char str3[50]= "";

    cout << "str1 = "<< str1 << endl;
    cout << "str2 = "<< str2 << endl;
    cout << "str3 = "<< str3 << endl;

    cout << "STRCAT (str1,str2) = " << strcat(str1,str2) << endl;
    cout << "STRNCAT (str3,str1,6) = " << strncat(str3,str1,6) << endl;


    return 0;
}
