#include<iostream>

using namespace std;

int main(){
    string s,res=" ";
    cout<<"Enter  a string : \n";
    cin>>s;

    //Remove duplicate from s 
    int hash[123]={0};
    for(int i = 0;i<s.length();i++)
    {
        if(hash[s[i]] == 0)
        {
            hash[s[i]] = 1;
            res += s[i];
        }
    }
    cout<<res<<endl;
    return 0;

}