#include <bits/stdc++.h>
using namespace std;

void FunArr(int a[])
{
	a[0] = 5;
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
 
int main()
{

	int c[0];
	// Changing the value
	c[0] = 7;
	cout << c[0] << endl;
	FunArr(c);
	cout << c[0] << endl;

	int a = 3;
	int b = 5;
	cout << "Before swapping : ";
	cout << a << " " << b << endl;
	cout << "After swapping : ";
	swap(a, b);
	cout << a << " " << b << endl;
}