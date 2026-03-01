#include <iostream>
using namespace std;
class student
{
    // data members (variable)
    // data-func (methods)/function and nothing
    //its about constructor
public:
    student(string ownername){
        cout<<"--------------------------------------"<<endl;
        cout<<"welcome to construcor"<<endl;
        cout<<"OWNER OF THIS SOFTWARE  "<<ownername<<endl;
        cout<<"--------------------------------------"<<endl;
        
    }
};

int main()
{
    student obj1("ehtisham");
    student obj2("ashraf");
    
}