#include <iostream>
using namespace std;
class student{
public:
    void call()
    {
        cout << "this call func" << endl;
    }
    int x;
    string name;
    void walk();
    void talk();
};
void student::talk(){
    cout << "here we describe func outside class" << endl;
}
void student::walk(){
    cout << "here we describe func outside class" << endl;
}
int main(){
    student obj;
    student obj1;
    obj.call();
    obj1.call();
    student obj2;
    obj2.talk();
    student obj3;
    obj3.walk();
}