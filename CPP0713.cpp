#include <bits/stdc++.h>

using namespace std;

int X[100], n, final = 1;

void ktao()
{
	for (int i = 1; i <= n; i++)
		X[i] = i;
}

void sinh()
{
	int i = n - 1;
	while (i >= 1 && X[i] >= X[i+1])
	{
		--i;
	}
	if (i == 0)
		final = 0;
	else
	{
		int j = n;
		while (X[i] > X[j])
		{
			--j;
		}
		swap(X[i], X[j]);
		reverse(X + i + 1, X + n + 1);
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		final = 1;
		cin >> n;
		ktao();
		while (final)
		{
			for (int i = 1; i <= n; i++)
				cout << X[i];
			cout << " ";
			sinh();
		}
		cout << endl;
	}
}
