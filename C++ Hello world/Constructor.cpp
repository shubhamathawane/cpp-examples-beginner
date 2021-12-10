#include<iostream>

using namespace std;

class A{
    int a,b;
    public:
    A() // default constructor
    {
        int a=2,b=3;
        cout<<a<<endl<<b<<endl<<"=========";
    }
    A(int a,int b,int c,int d)   // Parameterized constructor 
    {
        cout<<a<<endl<<b<<endl<<c<<endl<<d;
    }
};

int main(){
    A obj1;
    A obj2(34,45,4,65);
    return 0;
}

