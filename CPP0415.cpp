#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, m; cin >> n >> m;
		ll a[n], b[m];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a+n);
		for (int i = 0; i < m; i++)
			cin >> b[i];
		sort(b, b+m);
		cout << a[n-1]*b[0] << endl;
	}
}
