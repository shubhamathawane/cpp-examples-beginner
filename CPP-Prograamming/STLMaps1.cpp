#include<bits/stdc++.h>
using namespace std;

// function call for print
void print(map<int, string> &m){
	cout<<m.size()<<endl;
	for(auto &pr:m){
		cout<<pr.first<<" "<<pr.second<<endl;
	}
}


int main(){
	// map require two data types 
	map<int, string>m;	// declaration
	m[1] = "abc";	// O(log(n))  n = size of map
	m[2] = "cdc";
	m[3] = "xyz";

	// second method to insert key and value pairs 
	m.insert({4, "Second Method"});

	m[6] = 4;
	m[2] = "abc";

	//find function
	auto it = m.find(3); // it will return iterator , if val not availabe 
	if(it == m.end()){
		cout<<"NO Value\n";
	}else{
		cout<<(*it).first <<" "<<(*it).second<<endl;
	}

	//erase fun [it will take both key and values]
	m.erase(8);


	print(m);	

	return 0;
}