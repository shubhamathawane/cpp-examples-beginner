#include<iostream>

using namespace std;

int main(){

    int n,rev=0,remainder;
    cout<<"Enter any number : "<<endl;
    cin>>n;

    while(n!=0)    
  {    
     remainder=n%10;      
     rev=rev*10+remainder;    
     n/=10;    
  }    
    cout<<"Reverse Number is "<<rev<<endl;

    return 0;


}