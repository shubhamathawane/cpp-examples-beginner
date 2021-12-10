/*Destructor is also a speacial type of member function that 
is used to deallocate the memory, allocated by the construtcor */
// - Used with ~ sign ;

#include<iostream>

using namespace std;
int count=0;

class A
{
    public:
    A()   // creating constructor 
    {
        cout<<"Object "<<++count<<" Created"<<endl;
    }   
    ~A()   // creating destructor 
    {
        cout<<"Object "<<count--<<" Deleted"<<endl;
    }
};

int main(){
    A Obj,obj2,obj3;

    return 0;
}

