#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;

    // // Iterating through string;
    // for(int i=0;i<str.size();i++){
    //     cout<<str[i]<<" "<<endl;
    // }

    // //getline 
    // getline(cin, str);
    // cout<<str<<endl;

    // cin>>str;
    // string str_rev;
    // for(int i = str.size()-1;i>=0;i--){
    //     str_rev.push_back(str[i]);
    // }
    // cout<<str_rev<<endl;

    // Palindrome 

    // if(str == str_rev){
    //     cout<<"Yes"<<endl;
    // }else cout<<"NO"<<"\n";

    // int n=0;
    // for(int i = 0;i<str.size()/2;i++){
    //     if(str[i] == str[n] - i - 1){
    //         cout<<"Method : Yes\n";
    //     }else{
    //         cout<<"Method : No\n";            
    //     } 
    // }

    // Large Numbers

    
    cin>>str;
    int last_digit = str[str.size() - 3] - '0';
    cout<<last_digit;






    return 0;
}