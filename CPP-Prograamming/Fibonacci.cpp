#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
    int i = 0;
    while (n > i)
    {

        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            return 1;
        }
        else
        {
            return fib(n - 1) + fib(n - 2);
        }
    }
}
int main()
{
    int n;
    cout << "Enter the number of terms : ";
    cin >> n;
    cout << fib(n);
    return 0;
}