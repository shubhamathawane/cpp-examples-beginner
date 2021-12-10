#include<iostream>

using namespace std;

int main()
{
    int i,count =0;
    char ch[50],c;

    cout<<"Enter any string :: ";
    cin>>ch;
    cout<<"Enter any character to count occurrence :: ";
    cin>>c;

    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i] == c){
            count++;
        }
    }if(count == 0){
        cout<<" Given character not fount " ;
    }else{
        cout<<"Occurrence of given character [" <<c<<" ] is :: "<<count<<" times.\n";
    }
    return 0;

}