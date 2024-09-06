#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n], b[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		map<int, int> mp;
		for (int i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				mp[b[i]] = 0;
			}
			else
				mp[b[i]] = b[i+1];
		}
		for (int i = 0; i < n; i++)
		{
			if (mp[a[i]])
				cout << mp[a[i]] << " ";
			else
				cout << "_ ";
		}
		cout << endl;
	}
}
