// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
class base
{
    public : string name;int age,salary;
    void getdata(){
        cout<<"Enter name of the Employee : ";
        cin>>name;
        cout<<"Enter the age of the Employee : ";
        cin>>age;
        cout<<"Enter the salary of the Employee : ";
        cin>>salary;
    }
};
class derived : public base
{ public:
    void dispdata(){
        cout<<"    "<<endl<<"Name of the Employee is "<<name<<endl<<"Age of the employee is "<<age<<endl<<"Salary of the employee is "<<salary;
    }
};
int main() {
    derived a;
    a.getdata();
    a.dispdata();
    return 0;
}
