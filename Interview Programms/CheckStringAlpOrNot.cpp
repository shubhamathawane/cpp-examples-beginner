#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char str[100];
    int i=0,k=0,p;

    cout<<"Enter string Value : ";
    cin>>str; 

    i = strlen(str);

    for(int j=0;j<i;j++){
        p = str[j];
        if(p>=97 && p < 122){
            k++;
        }else if(p>=65 && p <=90){
            k++;
        }else if(p == 32){
            k++;
        }
    }
    if(k ==i){
        cout<<"String is alphabetic : "<<str;
    }else{
        cout<<"String is not alphabetic : "<<str;
    }
}