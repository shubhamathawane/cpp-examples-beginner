#include<iostream>

using namespace std;

int main(){
    int i,fact=1,number;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        fact = fact*i;
    }
    cout<<"Factorial is "<<fact;
    return 0;
}