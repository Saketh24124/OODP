//Program to check for common elements in 3 different arrays
#include<iostream>
using namespace std;
bool check(int l, int* i,int len){
    for(int j=0;j<len;j++){
        if(l==*(i+j)){
            return true;
        }
    }
    return false;
}
int main()
{
    int a1[]={1,2,3,4,5,6};
    int a2[]={4,8,12,16};
    int a3[]={1,4,16,64};
    for(int i=0;i<5;i++){
        if(check(*(a1+i),a2,5)&& check(*(a1+i),a3,5)){
            cout<<"Common element is present"<<endl;
            break;
        }
        else if(i==4){
            cout<<"No Common element is present"<<endl;
        }
    }
}