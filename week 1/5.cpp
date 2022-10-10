//Program to swap the values of two numbers
#include<iostream>
using namespace std;
 int main()
{
    int a,b;
    cout<<"Enter the First number : ";
    cin>>a;
    cout<<"Enter the Second number : ";
    cin>>b;
    cout << "\nBefore swapping a = "<<a<<", b = "<<b<< endl;
    int c;   
    c = a;
    a = b;
    b = c;
    cout << "After swapping a = "<<a<<", b = "<<b<<endl;
    return 0;
}