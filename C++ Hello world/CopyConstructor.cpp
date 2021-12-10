#include<iostream>

using namespace std;

 class A
 {
     int x,y;
     public:
     A(int a,int b)     // Paramterizes
     {
        x =a; y=b;
        cout<<a<<endl<<b<<endl;
     }
     A(A &ref)
     {
         x = ref.x;
         y = ref.y;
         cout<<x<<endl<<y<<endl;
     }
 };

 int main()
 {
     A obj(10,20);
     A obj2 = obj;
     return 0;
 }