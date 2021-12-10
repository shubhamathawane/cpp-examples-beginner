#include<bits/stdc++.h>

using namespace std;

int main(){
    
        int x;
        float t;
        cin>>x>>t;
        if(x%5 == 0 && x < t)
        {
           // t = t-0.50;
            float tot = abs(x-t)-0.50;
            cout<<tot<<endl;

        }else if(x > t){
           
            cout<<t<<endl;
        }else{
           
            cout<<t<<endl;
        }

    
    return 0;
}