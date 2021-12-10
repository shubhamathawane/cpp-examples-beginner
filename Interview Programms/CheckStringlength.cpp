#include<iostream>

using namespace std;

int main(){

    int i,count=0;
    char ch[50];

    cout<<"Enter String here : ";
    cin>>ch;

    for(i=0;ch[i]!='\0';i++)
    {
        count++;
    }

    cout<<"Length of [ "<<ch<<" ] youre string is : "<<count;
    return 0;

}