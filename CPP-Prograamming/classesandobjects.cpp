#include<bits/stdc++.h>
using namespace std;

class Car{
public:
	string brand;
	string model;
	int year;
	Car(string x, string y, int z){
		brand = x;
		model = y;
		year = z;
	}
};


int main(){
	Car carObj1("Motoroal", "x50", 2008);
	cout<<carObj1.brand<<" "<< carObj1.model <<" "<< carObj1.year<<endl;
	return 0;
}