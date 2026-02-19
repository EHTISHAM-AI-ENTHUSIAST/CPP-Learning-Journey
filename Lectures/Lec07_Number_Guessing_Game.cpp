
#include <iostream>
using namespace std;

int main()

{
   int tryNum = 1;
    char c;

    do {
        cout << "Please guess a character between a-z: ";
        cin >> c;

        if (c == 'z') {
            cout << "Congratulations! Your guess is correct!";
        } else {
            tryNum = tryNum + 1;
        }

    } while (tryNum <= 5 && c != 'z');
    return 0;
}
