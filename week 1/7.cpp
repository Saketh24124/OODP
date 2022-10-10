//Program to Check Whether Number is Even or Odd
#include<iostream>
using namespace std;
int main()
{
    int n,r;
    cout<<"Enter a number : ";
    cin>>n;
    r=(n%2);
    if(r==0)
    {
    cout<<"The number you have entered is Even";
    }else
    {
    cout<<"The number you have entered is Odd";
    }
}