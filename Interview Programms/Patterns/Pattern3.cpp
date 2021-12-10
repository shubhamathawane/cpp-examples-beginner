#include<iostream>

using namespace std;

int main(){
    int i, j, k,sp;

    //print 7th row
    for(i=0;i<=6;i++)
    {
        for(j=65;j<=71-i;j++) //loop for first half
        {
          cout<<char(j);

        }
        //add space between these string
        for(sp=1;sp<=i*2-1;sp++)
           cout<<" ";

        for(k=71-i;k>=65;k--) //loop for next half (Second half)
        {
            if(k==71);
            else
                cout<<char(k);
        }


     cout<<endl;
    }
    return 0;
}


// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA
// AB         BA
// A           A