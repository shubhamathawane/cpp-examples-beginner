#include<iostream>

using namespace std;

int main(){
    int a,i,sum=0;
    cout<<"Enter 10 natural number to calculate sum\n";
    for(i=0;i<10;i++){
        cout<<i<<endl;
        sum = sum + i;
    }
    cout<<"\nSum of natural numbers is : "<<sum;
    
    return 0;
}