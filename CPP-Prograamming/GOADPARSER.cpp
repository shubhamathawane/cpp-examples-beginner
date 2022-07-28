#include<bits/stdc++.h>
using namespace std;
int main(){
	string s, str;
	int i = 0;
	cin>>s;
	int n = s.size();
	while(i < n){
		if(s[i] == 'G'){
			str.append("G");
			i++;
		}else if(s[i] == '(' && s[i+1] == ')'){
			str.append("o");
			i = i+2;
		}else{
			str.append("al");
			i = i+4;
		}
	}
	cout<<str<<endl;

	return 0;
}