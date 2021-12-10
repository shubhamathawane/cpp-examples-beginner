#include<iostream>

using namespace std;

void solve(){
    int xa,xb,XA,XB, ans;
    cin>>xa>>xb>>XA>>XB;
    ans = XA/xa + XB/xb;
    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}