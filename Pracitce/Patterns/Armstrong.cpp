#include<iostream>

using namespace std;

int main(){
    int num,r,sum=0,tmp;
    cin>>num;
    for(tmp = num;num!=0;num = num/10){
        r = num%10;
        sum = sum+(r*r*r);
    }
    if(sum == tmp){
        cout<<" Number is armstrong Num " <<tmp<<endl;
    }else{
        cout<<"number is not Armstrong number : ";
    }
    return 0;

}