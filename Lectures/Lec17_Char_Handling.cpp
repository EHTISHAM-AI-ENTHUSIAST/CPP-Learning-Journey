// its about Character Handling Functions , this program is for handling characters in C++

#include <iostream>
#include <ctype.h>
#include <stdio.h>
using namespace std;

main()

{
    char c;
    int i = 0, lc = 0, uc = 0, dig = 0;

    cout << "Enter a string ";

    while ((c = getchar()) != '\n')
    {
        i++;
        if (islower(c))
            lc++;
        else if (isupper(c))
            uc++;
        else if (isdigit(c))
            dig++;
    }
    
    cout << "Total characters: " << i << endl;
    cout << "Lowercase characters: " << lc << endl;
    cout << "Uppercase characters: " << uc << endl;
    cout << "Digits: " << dig << endl;


    return 0;
}
