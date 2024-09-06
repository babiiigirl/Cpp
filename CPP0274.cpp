#include <bits/stdc++.h>

using namespace std;
int b[1000000] = {0};
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n];
		memset(b, 0, sizeof(b));
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			b[a[i]]++;
		}
		int dem = 0;
		for (int i = 0; i < n; i++)
		{
			if (b[a[i]] >= 2)
			{
				dem++;
			}
		}
		cout << dem << endl;
	}
}
