#include<bits/stdc++.h>
#define ll long long int
#define boost ios::sync_with_studio(false); cin.tie(0)

using namespace std;

int main(){
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n; cin>>n;
        ll orig_sum = 0;
        for(int i=0;i<n;i++){
            ll num; cin>>num;
            orig_sum += num;
        }
        if(orig_sum % 2 == 0 ) cout<< 1 << '\n';
        else cout<< 2 << '\n';
    }
    return 0;
}