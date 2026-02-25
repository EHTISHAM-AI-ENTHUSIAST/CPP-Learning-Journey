// file handling

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()

{
    ifstream myfile;

    string result;

    myfile.open("mytextfile.txt");

    myfile >> result;

    cout << result;

    myfile.close();

    return 0;
}
