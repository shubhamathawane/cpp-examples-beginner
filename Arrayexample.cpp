#include<iostream>

int main()
{
    using namespace std;

    int marks[3];
    float average;
    cout<<"Enter first student marks" << endl;
    cin>>marks[0];
    cout<<"Enter second student marks "<<endl;
    cin>>marks[1];
    cout<<"Enter third student marks "<<endl;
    cin>>marks[2];

    average =  (marks[0] + marks[1] + marks[2] / 3.0);
    cout<<"Average marks : " << average <<endl;
    return 0;
}