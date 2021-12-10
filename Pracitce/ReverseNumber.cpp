#include<iostream>

using namespace std;

int main(){
    int a,b,d=0;
    cout<<"Enter the number to be replace :";
    cin>>a;
    while(a > 0)
    {
        b = a%10;
        a = a/10;
        d = (d*10)+b;
    }
    cout<<"Reverse number :"<<d<<endl;
    return 0;

}