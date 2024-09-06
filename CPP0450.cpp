#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		unordered_map <int, int> mp;
		int n; cin >> n;
		int ok = -1;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			mp[x]++;
			if (mp[x] == 2 && ok == -1)
			{
				ok = x;
			}
		}
		cout << ok << endl;
	}
	return 0;
}
