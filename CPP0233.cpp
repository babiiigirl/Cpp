#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
	    vector<int> v;
		int n, m; cin >> n >> m;
		
		int a[n][m];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				cin >> a[i][j];
		}
		int h1 = 0, h2 = n-1, c1 = 0, c2 = m-1;
		int d = 0;
		while (h1 <= h2 && c1 <= c2)
		{
			for (int j = c1; j <= c2; j++)
			{
				if(d == n*m)	break;
				v.push_back(a[h1][j]);
				//cout << a[h1][j] << " ";
				++d;
			}
			++h1;
			for (int i = h1; i <= h2; i++)
			{
				if(d == n*m)	break;
				v.push_back(a[i][c2]);
				//cout << a[i][c2] << " "; 
				++d;
			}
			--c2;
			if(c1 <= c2)
			{
				for (int j = c2; j >= c1; j--)
				{
					if(d == n*m)	break;
					v.push_back(a[h2][j]);
					//cout << a[h2][j] << " ";
					++d;
				}
				--h2;
			}
			if (h1 <= h2)
			{
				for (int i = h2; i >= h1; i--)
				{
					if(d == n*m)	break;
					v.push_back(a[i][c1]);
					//cout << a[i][c1] << " ";
					++d;
				}
				++c1;
			}
		}
		for (int i = v.size() - 1; i >= 0; i--)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
