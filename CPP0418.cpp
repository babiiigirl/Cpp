#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		map<int ,int> mp;
		int n, m; cin >> n >> m;
		int a[n], b[m];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			mp[a[i]]++;
		}
		for (int i = 0; i < m; i++)
		{
			cin >> b[i];
			mp[b[i]]++;
		}
		for (auto x : mp)
		{
			if(x.second >= 1)
				cout << x.first << " ";
		}
		cout << endl;
		for (auto x : mp)
		{
			if (x.second == 2)
				cout << x.first << " ";
		}
		cout << endl;
	}
}
