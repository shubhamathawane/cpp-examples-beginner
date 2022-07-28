#include <bits/stdc++.h>
using namespace std;
int digit_sum(int n)
{
	int digit_sum = 0;
	while (n)
	{
		digit_sum = digit_sum + n % 10;
		n = n / 10;
	}
	return digit_sum;
}
int main()
{

	int a, b, c;
	cin >> a >> b >> c;

	cout << digit_sum(a) + digit_sum(b);

	cout << a % b << endl;
	cout << b % c << endl;

	return 0;
}