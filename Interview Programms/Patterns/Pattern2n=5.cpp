#include<bits/stdc++.h>
using namespace std;
#define SIZE 7
int main()
{
    int k;
    for (int i = 1; i <=5; i++)
    {
            for (int j = 1; j <=5-i; j++)
            {
                cout<<"*";
            }
            for (k = i; k < i*2; k++)
            {
                cout<<k;
            }
            k--;k--;
             for (; k>=i; k--)
            {
                cout<<k;
            } 
            for (int j = 1; j <=5-i; j++)
            {
                cout<<"*";
            }
            cout<<endl;            
    }
    

}



// ****1****
// ***232***
// **34543**
// *4567654*
// 567898765