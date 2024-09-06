#include <bits/stdc++.h>

using namespace std;

int test(int a[], int n, int k)
{
	int d = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] <= k)	++d;
	}
	int cnt = 0;
	for (int i = 0; i < d; i++)
	{
		if (a[i] <= k)
			++cnt;
	}
	int tmp = cnt;
	for (int i = d; i < n; i++)
	{
		if (a[i - d] <= k)
			cnt--;
		if (a[i] <= k)
			cnt++;
		tmp = max(tmp, cnt);
	}
	return d - tmp;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		cout << test(a, n, k);
		cout << endl;
	}
}
