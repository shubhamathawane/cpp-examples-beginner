#include<iostream>

using namespace std;

int main(){
    int i,j,r=5;
    for(i=1;i<=r+1;i++){
        for(j=0;j<i+1;j++){
            cout<<i * j;
            cout<<" ";
        }
        cout<<endl;
        cout<<"\a";
            }
    return 0;
}




// 0 1 
// 0 2 4
// 0 3 6 9
// 0 4 8 12 16
// 0 5 10 15 20 25
// 0 6 12 18 24 30 36