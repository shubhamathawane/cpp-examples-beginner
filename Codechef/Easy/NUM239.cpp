#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,lastdig,count=0;
        cin>>l>>r;
        for(int i=l;i<=r;i++)
        {
            lastdig=i%10;
            if( lastdig==2 || lastdig==3 || lastdig==9)
            {
                count++;
            }
        }
        cout<<count<<"\n";
    }
}