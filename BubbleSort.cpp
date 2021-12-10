#include<iostream>

using namespace std;

int main(){
    int i,a[100],no,j,temp;
    std::cout << "How many elements you want to insert : " << std::endl;
    cin>>no;
    cout<<"Enter "<<no<< " elements : "<<endl;
    for(i=0;i<no;i++)
    {
        cin>>a[i];
    }
    cout<<"Array Before sorting : "<<endl;
    for(i=0;i<no;i++)
    {
        cout<<a[i]<<endl;
    }
    for(i=0;i<no;i++)
    {
        for(j=0;j<no-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] =  a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<"Data after Sorting : "<<endl;
    for(j=0;j<no;j++)
    {
        cout<<a[j]<<endl;
    }
    return 0;
}