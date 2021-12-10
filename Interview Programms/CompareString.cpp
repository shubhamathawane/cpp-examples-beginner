#include<iostream>

using namespace std;

int main(){
    
    int i,j,count,flag =0;
    char str1[50],str2[50];

    cout<<"Enter first String :: ";
    gets(str1);
    cout<<"Enter second String :: ";
    gets(str2);

    while(str1[i]!='\0')
    {
        i++;
    }
    while(str2[i]!='\0')
    {
        j++;
    }
    if(i!=j)
    {
        flag = 0;
    }
    else{
        for(i=0,i=0;str1[i]!='\0',str2[j]!='\0';i++,j++){
            if(str1[i] == str2[j]){
                flag =1;
            }
            else{
                flag= 0;
            }
        }
    }
    if(flag = 0){
        cout<<"String does not match ";
    }else{
        cout<<"String matches ";
    }

    return 0;


}