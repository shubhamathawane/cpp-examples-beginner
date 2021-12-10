#include<iostream>

using namespace std;
int main(){

    int a[20];
    //b[20],c[20],i;
    int n = 4,i;
    for(i=1;i<n;i++){
        cin>>a[i];
    }
    for(i = 1;i<n;i++)
    {
        if(a[0] < a[i])
        {
            a[0] = a[i];
        }
    }
    cout<<a[0]<<endl;
    return 0;
}