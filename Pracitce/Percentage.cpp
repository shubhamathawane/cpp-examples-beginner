#include<iostream>

using namespace std;

int main()
{
    int no,i;
    float marks[10], per=0,total=0;
    cout<<"Enter Number of subjects : ";
    cin>>no;
    cout<<"Enter Marks of "<<no<<" subjects : ";
    for(i=0;i<no;i++)
    {
        cin>>marks[i];
    }
    for(i=0;i<no;i++)
    {
        total = total+marks[i];
    }
    per = total/no;
    cout<<"Percentages : "<<per;
    
    
    return 0;
}