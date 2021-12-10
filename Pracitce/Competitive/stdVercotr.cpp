// #include "stdafx.h" 
#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;

int main(){
    // C++ STL

    vector<int> A = {11,2,3,14};

    cout<<A[1]<<endl;   // Accessing Second element from vector 

    sort(A.begin(), A.end());  // D(NlogN)
    // 2,3,11,14
 
    bool present = binary_search(A.begin(),A.end(),3); // true
    cout<<present<<endl;
    present = binary_search(A.begin(), A.end(), 4);  // False
    cout<<present<<endl;

}   