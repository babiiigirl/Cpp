#include <bits/stdc++.h>

using namespace std;

void fb(int n)
{
	long long fibo[n];
	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i <= n; i++)
	fibo[i] = fibo[i-1] + fibo[i-2];
	cout << fibo[n] << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		fb(n);
	}
}
