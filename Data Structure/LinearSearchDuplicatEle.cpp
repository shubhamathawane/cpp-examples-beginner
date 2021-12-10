#include<iostream>
using namespace std;

int main()
{
    int arr[100],tot,i,num,arrTemp[50],j=0,chk=0;

    cout<<"\nEnter the size for array Size : " <<endl;
    cin>>tot;
    cout<<"Enter "<<tot<<" Array elements :";
    for(i=0;i<tot;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the number to search : ";
    cin>>num;
    for(i=0;i<tot;i++)
    {
        if(arr[i] ==  num)
        {
            arrTemp[j] = i;
            j++;
            chk++;
        }
    }
    if(chk>0){
        cout<<"\nNumber found at Index no. : "<<endl;
        tot = chk;
        for(i=0;i<tot;i++){
            cout<<arrTemp[i] <<" ";
        }
    }
    else{
            cout<<"\nNumber doesn't found ! ";
            cout<<endl;
            return 0;
        }
}
