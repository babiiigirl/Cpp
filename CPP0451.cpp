#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		int k, x;
		cin >> k >> x;
		int pos;
		for (int i = 0; i < n; i++)
		{
			if (a[i] == x)
			{
				pos = i;
				break;
			}
		}
		for (int i = pos - k/2; i < pos; i++)
			cout << a[i] << " ";
		for (int i = pos + 1; i < pos + k/2 + 1; i++)
			cout << a[i] << " ";
		cout << endl;
	}
}
