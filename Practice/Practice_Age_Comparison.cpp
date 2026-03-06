#include <iostream>
using namespace std;

int main()

{
    int AmeerAge, AmaraAge;

    cout << "Please enter Amer's age: ";
    cin >> AmeerAge;

    cout << "Please enter Amara's age: ";
    cin >> AmaraAge;

    if (AmeerAge >= AmaraAge)
    {
        cout << "Amer is older than Amara of the same age as Amara";
    }
    else
    {
        cout << "Amer is younger than Amara";
    }

    return 0;
}
