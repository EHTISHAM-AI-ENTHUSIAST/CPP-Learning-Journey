#include <iostream>
using namespace std;
void display(int marks[5]);
int main()
{
    int marks[5];
    cout << "the marks of student 1 :";
    cin >> marks[0];
    cout << "the marks of student 2 :";
    cin >> marks[1];
    cout << "the marks of student 3 :";
    cin >> marks[2];
    cout << "the marks of student 4 :";
    cin >> marks[3];
    cout << "the marks of student 5 :";
    cin >> marks[4];
    display(marks);

    return 0;
}
void display(int marks[5])
{
    cout << "display the student marks" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "the marks of student " << i + 1 << " is " << marks[i] << endl;
    }
}