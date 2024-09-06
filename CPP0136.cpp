#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int snt(ll n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return 0;
	}
	return n > 1;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		ll n; cin >> n;
		int cnt = 0;
		for (ll i = 1; i <= sqrt(n); i++)
		{
			if(snt(i))
			{
				++cnt;
			}						
		}
		cout << cnt;
		cout << endl;
	}
}
