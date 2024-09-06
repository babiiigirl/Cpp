#include <bits/stdc++.h>

using namespace std;


int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n];
		set<int> s;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			s.insert(a[i]);
		}
		if (s.size() == 1)
			cout << -1;
		else
			cout << *s.begin() << " " << *(++s.begin());
		cout << endl;
	}
}
