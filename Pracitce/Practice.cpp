#include<iostream>
#include<string.h>

using namespace std;

int main()
{   
    int arr[100],i,num,flag;
    int size;
    cout<<"How long array you want : ";
    cin>>size;
    cout<<"enter "<<size<<" Array Alements : ";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter Number You want to search : ";
    cin>>num;
    for(i=0;i<10;i++){
        if(arr[i] ==  num){
            flag = i;
            break;
        }
    }
    cout<<"Number "<<num<<" found at poistion "<<flag;
    cout<<endl;
    cout<<endl;
    return 0;
}