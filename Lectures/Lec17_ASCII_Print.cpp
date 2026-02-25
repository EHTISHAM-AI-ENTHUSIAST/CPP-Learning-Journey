// this prgram is to print ASCII characters

#include <iostream>
using namespace std;

main()

{
    int i ;
    char c;

    for(i=0; i<=256; i++)
    {
        c = i;
        cout << i << " -----> " << c << endl;
    }
    return 0;
}
