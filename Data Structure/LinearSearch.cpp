#include<iostream>

using namespace std;

int main()
{
    int arr[10],i,num,flag;
    cout<<"Etner 10 numbers : ";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter a number to search : ";
    cin>>num;
    for(i=0;i<10;i++)
    {
        if(arr[i] == num)
        {
            flag = i;
            break;
        }
    }
    cout<<"\nItem found at No. :"<<flag;
    cout<<endl;
    cout<<endl;
    return 0;
}

