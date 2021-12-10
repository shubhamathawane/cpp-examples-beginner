#include<iostream>


using namespace std;

int main()
{
    int i,a[5],no,pos;
    cout<<"Enter element in aray :"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"\nStored element in array : "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"\nEnter Position for enter element : "<<endl;
    cin>>pos;
    if(pos>5)
    {
        cout<<"\nThis is out of range : "<<endl;
    }
    else
    {
        cout<<"\nEnter new element : "<<endl;
        cin>>no;
        --pos;
        for(i=5;i>=pos;i--)
        {
            a[i+1] =  a[i];
        }
            a[pos] = no;
            cout<<"\nStored data in array : "<<endl;
            for(i=0;i<6;i++)
            {
                cout<<a[i];
            }
    }
    return 0;
}
