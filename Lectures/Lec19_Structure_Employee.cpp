//this program will show data members of structure


#include <iostream>
#include <string>
using namespace std;

//defining structure
struct employee
{
    string name;
    string designation;
    int experience;
    string address;
};

int main()
{
    //create value to store value of structure
    employee e1{"John Doe", "Software Engineer", 5, "123 Main St, Anytown, USA"};
    employee e2{"Jane Smith", "Project Manager", 8, "456 Oak St, Othertown, USA"};
    //print structure data members
    cout << "Employee 1 Details:" << endl;
    cout << "Name: " << e1.name << endl;
    cout << "Designation: " << e1.designation << endl;
    cout << "Experience: " << e1.experience << " years" << endl;
    cout << "Address: " << e1.address << endl << endl;
    cout << "Employee 2 Details:" << endl;
    cout << "Name: " << e2.name << endl;
    cout << "Designation: " << e2.designation << endl;
    cout << "Experience: " << e2.experience << " years" << endl;
    cout << "Address: " << e2.address << endl;


    return 0;
}
