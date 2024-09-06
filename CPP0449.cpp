#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int x ; cin >> x;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n);
		int mark = 0;
		for (int i = 0; i < n; i++)
		{
			if (binary_search(a, a + n, a[i] + x))
			{
				mark = 1;
				break;
			}
		}
		if (mark)
			cout << mark << endl;
		else
			cout << -1 << endl;
	}
}
