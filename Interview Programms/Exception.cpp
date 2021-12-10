#include<iostream>

using namespace std;

int main(){
    
    cout<<"Execuition starting.."<<endl;
    int a,c,b;
    cout<<"Enter two number : ";
    cin>>a>>b;

    try
    {
        if(b==0)
        throw b;
        c = a/b;
        cout<<"Result : "<<c<<endl;
    }
    catch(int x)
    {
        cout<<"Can't devide by "<<x<<endl;
    }

    cout<<"Execution ended...";

    return 0;
}