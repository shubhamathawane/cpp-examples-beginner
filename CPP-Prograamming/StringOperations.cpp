#include<bits/stdc++.h>
using namespace std;
int main(){
	string str1, str2,str3;
	cin>>str1>>str2;
	cout<<str1.size()<<" "<<str2.size()<<endl;
	str3 = str1+str2;
	cout<<str3<<endl;
	char a = str1[0];
	char b = str2[0];
	str1[0] = b;
	str2[0] = a;
	cout<<str1<<" "<<str2<<endl;


	return 0;
}