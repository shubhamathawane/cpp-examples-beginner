#include <bits/stdc++.h>
using namespace std;

void increment(int *x){
    (*x)++;
}

int main()
{
    // int a = 200;
    // int *p_x;
    // p_x = &a;
    // // Address of a can be access using & operator
    // cout<<&a<<endl;
    // cout<<*p_x<<endl;
    // cout<<"Changing the value of a using Pointer : "<<endl;
    // *p_x = 30;
    // cout<<*p_x<<" "<<a<<endl;


    // // Arrays
    // int x[10],y;

    // // Double Pointers 

    // int *p;
    // int **pp;  // --> 

    // int t = 4;
    // p = &a;
    // pp = &p;

    // cout<<**pp<<endl;

    // // coding part;

    int x = 4;
    int *p_x = &x;
    cout<<"Addr x: "<<&x<<endl;
    cout<<"val p_x : "<<p_x<<endl;
    cout<<"Val *p_x : "<<*p_x<<endl;
    *p_x = 5;
    cout<<"x: "<<x<<endl;
    cout<<"p_x + 1 : " <<p_x + 1<<endl;
    int **p_p_x = &p_x;
    cout<<"Addr p_x: "<<&p_x<<endl;
    cout<<"Val p_p_x: "<<p_p_x<<endl;
    cout<<"Val *p_p_x: "<<*p_p_x<<endl;
    cout<<"Val **p_p_x: "<<**p_p_x<<endl;
    **p_p_x = 7;
    cout<<"x: "<<x<<endl;

    // Arrays 
    cout<<"================= Arrays =========================\n";
    int a[10];
    a[0] = 2;
    a[1] = 4;
    cout<<"a : "<<a<<endl;
    cout<<"&a[0] : "<<&a[0]<<endl;
    cout<<"*a : "<<*a<<endl;
    cout<<"a + 1 : "<<a+1<<endl;
    cout<<"&a[1] : "<<&a[1]<<endl;
    cout<<"*(a+1) : "<<*(a+1)<<endl;

    cout<<"================= Pass By Reference =========================\n";
    int z = 4;
    cout<<"z : "<<z<<endl;
    increment(&z);
    cout<<"z after increment : "<<z<<endl;



    return 0;
} 