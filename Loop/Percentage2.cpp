#include<iostream>

using namespace std;

int main()
{
    int no,i;
    float marks[10],total=0,per=0;
    cout<<"Enter Totoal subjects :";
    cin>>no;
    cout<<"Enter you Total makrs : ";
    cin>>total;
    
    cout<<"Enter you "<<no<<" subject makrs : ";
    for(i = 0;i<no;i++)
    {
        cin>>marks[i];
    } 
    for(i = 0;i<no;i++)
    {
        total =  total+marks[i];
    }
    per = total/no;
    cout<<"Percentages : "<<per;

    return 0;
}