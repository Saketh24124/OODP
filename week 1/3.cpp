//Program to Find Quotient and Remainder.
#include<iostream>
using namespace std;
int main(){
    int dividend,divisor,rem,quo;
    cout<<"Enter dividend number : ";
    cin>>dividend;
    cout<<"Enter divisor number : ";
    cin>>divisor;
    rem=dividend % divisor;
    quo=dividend / divisor;
    cout<<quo<<" is the quotient of the calculated division"<<endl;
    cout<<rem<<" is the remainder of the calculated division";
}