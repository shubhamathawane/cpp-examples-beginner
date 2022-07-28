#include<bits/stdc++.h>
using namespace std;

class Person{
public:
	string first_name;
	string last_name;
	int age;

	void print_data(){
		cout<<"first_name : "<<first_name<<endl;
		cout<<"last_name : "<<last_name<<endl;
		cout<<"age : "<<age<<endl;
	}
};


int main(){
	Person p1;
	cout<<"Enter your name : "<<endl;
	cin>>p1.first_name;
	cout<<"Enter your last_name : "<<endl;
	cin>>p1.last_name;
	cout<<"Enter your age : "<<endl;
	cin>>p1.age;
	p1.print_data();
	return 0;
}