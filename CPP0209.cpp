#include <iostream>

using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, Q;
		cin >> n >> Q;
		int a[n+1];
		for (int i = 1; i <= n; i++)
			cin >> a[i];
		int p[n+1] = {0};
		for (int i = 1; i <= n; i++)
			p[i] = p[i-1] + a[i];
		while (Q--)
		{
			int l, r;
			cin >> l >> r;
			cout << p[r] - p[l-1] << endl;
		}
	}
	return 0;
}
