//Program to check if a number is positive, negative or zero
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n>0) cout<<"The entered number is positive";
    else if(n<0) cout<<"The entered number is negative";
    else cout<<"The entered number is zero";
}