#include<iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--)
    {
        int n,k,s;
        cin>> n >> k >> s;
        cout<<(s - n * n) /( k - 1)<<endl;
    }
    return 0;
}