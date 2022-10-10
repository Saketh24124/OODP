//Program to check if a year or not
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a year : ";
    cin>>year;
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
    cout<<"The year "<<year<<" is a leap a year";
    }else
    {
    cout<<"The year "<<year<<" is not a leap a year";
}
}