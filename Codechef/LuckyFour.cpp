#include<iostream>
#include<sstream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ostringstream str1;
        str1<<n;
        string s = str1.str();

        //234454 k = 6
        int count = 0;
        int k = (int)s.size();
        for(int i = 0; i < s.size();i++)
        {
            if(s[i] == '4'){
                count++;
            }else{
                count = count;
            }
        }
        cout<<count<<endl;
    }
}