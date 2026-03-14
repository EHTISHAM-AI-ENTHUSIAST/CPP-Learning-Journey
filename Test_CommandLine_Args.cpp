#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    cout << "Number of command-line arguments: " << argc << endl;
    cout << endl;

    cout << "Arguments received:" << endl;
    for (int i = 0; i < argc; i++)
    {
        cout << "  Argument [" << i << "]: " << argv[i] << endl;
    }

    return 0;
}
