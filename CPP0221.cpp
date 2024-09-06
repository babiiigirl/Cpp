#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, m; cin >> n >> m;
		int a[n][m];
		for (int i = 0; i < n ; i++)
		{
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		}
		int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
		while (h1 < h2 && c1 < c2)
		{
			int pre = a[h1 + 1][c1];
			for (int j = c1; j <= c2; j++)
			{
				int cur = a[h1][j];
				a[h1][j] = pre;
				pre = cur;
			}
			++h1;
			for (int i = h1; i <= h2; i++)
			{
				int cur = a[i][c2];
				a[i][c2] = pre;
				pre = cur;
			}
			--c2;
			if (c1 <= c2)
			{
				for (int j = c2; j >= c1; j--)
				{
					int cur = a[h2][j];
					a[h2][j] = pre;
					pre = cur;
				}
				--h2;
			}
			if (h1 <= h2)
			{
				for (int i = h2; i >= h1; i--)
				{
					int cur = a[i][c1];
					a[i][c1] = pre;
					pre = cur;
				}
				++c1;
			}
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
