#include<iostream>

using namespace std;

class Employee{

public:
    int id;
    string name;
    float salary;
    Employee(int i,string n,float s)
    {
        id = i;
        name = n;
        salary = s ;
    }
    void display()
    {
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};
int main(){
    Employee e1 = Employee(101,"Shubham",899900);
    Employee e2 = Employee(102,"Vishal",999000);
    Employee e3 = Employee(103,"Mayur",890004);

    e1.display();
    e2.display();
    e3.display();

    return 0;
}
