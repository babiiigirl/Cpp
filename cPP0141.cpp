#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int test(ll a[], ll n)
{
	for (int i = 0; i < 100; i++)
	{
		if(a[i] == n)
			return 1;
	}
	return 0;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		ll n; cin >> n;
		ll f[100];
		f[0] = 0; f[1] = 1;
		for (int i = 2; i < 100; i++)
		{
			f[i] = f[i-2] + f[i-1];
		}
		if (test(f, n))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
