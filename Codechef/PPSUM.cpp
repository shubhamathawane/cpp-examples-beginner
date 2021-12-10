#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        
        int sum2 = 0,d,n;
        cin>>d>>n;
        int sum = d*n;
       for(int i=sum;i>=1;i--)
       { 
           sum2 += i;
       } 
        cout<<sum2<<endl;
    }
    return 0;
}