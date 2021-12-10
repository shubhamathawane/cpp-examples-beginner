#include<iostream>

using namespace std;

int main()
{
    
    
    int i,j,spc,t=1,k;
    spc = i+4-1;
    for(i=1;i<=4;i++){
        for(k=spc;k>=1;k--)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<t++;
        }cout<<endl;
        spc--;
    }


   
    
    return 0;

}