#include <bits/stdc++.h>

using namespace std;

void test(int a[][100], int n)
{
	map<int, int> mp;
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (mp[a[i][j]] == i)	mp[a[i][j]]++;
		}
	}
	for (auto it : mp)
	{
		if (it.second == n)	++cnt;
	}
	cout << cnt << endl;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[100][100];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		}
		test(a, n);
	}
}
