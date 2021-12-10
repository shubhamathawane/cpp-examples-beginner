/* class Excercise - Read and print house details along with Room details */
//includehelp.com

#include<iostream>

using namespace std;

class room{
    int l;
    int b;
    int h;
    public:
    void getroom(){
        cout<<"Enter length,breath,height :" ;
        cin>>l>>b>>h;
    }
    void putroom(){
        cout<<"Length: "<<l<<",Breath: "<<b<<",Height"<<h<<endl;

    }
};

class address{
    int hno;
    char city[30];
    char state[30];
    public:
    void getad()
    {
        cout<<"House number : ";
        cin>>hno;
        cout<<"City : ";
        cin>>city;
        cout<<"State :";
        cin>>state;
    }
    void putad()
    {
        cout<<"House No : "<<hno<<",City : "<<city<<",State : "<<city<<endl;

    }
};

class house{
    char hoousename[30];
    address a;
    room r[10];  //max. 10 room 
    public:
    void input();
    void display();

};
//function defination
void house::input()
{
    cout<<"Enter house Name : ";
    cin>>hoousename;
    cout<<"Enter address : \n";
    a.getad();
    for (int i = 0; i < 3; i++)
    {
        cout<<"House Details : "<<i+1<<"\n";
        r[i].getroom();
    }
}
    void house::display()
    {
        cout<<"House name: "<<hoousename<<endl;
        cout<<"Address is : ";
        for(int i=0;i<3;i++)
        {
            cout<<"House Details : "<<i+1<<"\n";
            r[i].putroom();
        }
    }
    
int main()
{
    house x;
    x.input();
    x.display();
    return 0;

} 