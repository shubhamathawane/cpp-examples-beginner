#include<iostream>

using namespace std;

int main(){
    int n1=0,n2=1,n3,i,num;

    cout<<"Enter the number of elements : ";
    cin>>num;
    cout<<n1<<" "<<n2<<" "; // printing 0 and 1
    

    for(i=2;i<num;++i){
        n3 = n1+n2;
        cout<<n3<<" ";
        n1 = n2;
        n2 = n3;
    }
    return 0;
}

// without using recursion in c++

// #include<iostream>
// using namespace std;

// void printFibonacchi(int n){
//     static int n1 = 0, n2=1, n3;
//     if(n>0){
//         n3 = n1 + n2;
//         n1 = n2;
//         n2 = n3;
//         cout<<n3<<" ";
//         printFibonacchi(n-1);
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the number of elements : ";
//     cin >> n;
//     cout<<"Fibonacci Series : ";
//     cout<<"0"<<"1";
//     printFibonacchi(n-2); // n -2 because 2 numner are already printed 
//     return 0;


// }