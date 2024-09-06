#include <bits/stdc++.h>

using namespace std;
#define cons 1000000007

long long test(int x, int n)
{
	long long t = 1;
	for (int i = 0; i < n; i++)
	{
		t *= x;
		t %= cons;
	}
	return t;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, x; cin >> n >> x;
		int a[n];
		for (int i = n-1; i >= 0; i--)
			cin >> a[i];
		long long sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += a[i] * test(x, i);
			sum %= cons;
		}
		cout << sum << endl;
	} 
	return 0;
}
