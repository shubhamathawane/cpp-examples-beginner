#include<bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int d, int n){
	//method 1;
	// int temp[n];
	// int k = 0;
	// // copying element of arr from d to n into temp array
	// for(int i = d; i < n; i++ ){
	// 	temp[k] = arr[i];
	// 	k++;
	// }
	// // copying element of arr from 0 to d into temp arr
	// for(int i = 0;i<d;i++){
	// 	temp[k] = arr[i];
	// 	k++;
	// }
	// for(int i = 0;i<n;i++){
	// 	arr[i] = temp[i];
	// }


	// method 2 ; 
	int p = 1;
	while(p<=d){
		int last = arr[0];
		for(int i = 0; i<n-1;i++){
			arr[i] = arr[i+1];
		}
		arr[n-1] = last;
		p++;
	}


}

void show(int arr[], int n){
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){

	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int d;
	cin>>d;
	int n = sizeof(arr)/sizeof(arr[0]);

	rotateArray(arr, d, n);
	show(arr, n);

	return 0;

}