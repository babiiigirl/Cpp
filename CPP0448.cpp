#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		map <int, int> mp;
		int n, k; cin >> n >> k;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			mp[x]++;
		}
		if(mp.count(k) == 0)
			cout << -1 << endl;
		for (auto it : mp)
		{
			if (it.first == k)
				cout << it.second << endl;
		}
	}
}
