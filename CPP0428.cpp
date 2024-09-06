#include <bits/stdc++.h>

using namespace std;
using ll = long long;
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, m; cin >> n >> m;
		ll a[n], b[m];
		multiset<ll> s;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			s.insert(a[i]);
		}
		for (int i = 0; i < m; i++)
		{
			cin >> b[i];
			s.insert(b[i]);
		}
		for (auto x : s)
			cout << x << " ";
		cout << endl;
	}
 } 
