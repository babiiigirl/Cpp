#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int a[1000];
	for (int i = 0; i < n*n; i++)
	{
			cin >> a[i];
	}
	sort (a, a+n*n);
	int b[n][n];
	int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1;
	int k = 0;
	while (h1 <= h2 && c1 <= c2)
	{
		for(int j = c1; j <= c2; j++)
		{
			b[h1][j] = a[k];
			++k;
		}
		++h1;
		for (int i = h1; i <= h2; i++)
		{
			b[i][c2] = a[k];
			++k;
		}
		--c2;
		if (c1 <= c2)
		{
			for (int j = c2; j >= c1; j--)
			{
				b[h2][j] = a[k];
				++k;
			}
			--h2;
		}
		if (h1 <= h2)
		{
			for (int i = h2; i >= h1; i--)
			{
				b[i][c1] = a[k];
				++k;
			}
			++c1;
		}
	} 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << b[i][j] << " ";
		cout << endl;
	}
}
