#include  <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, x; cin >> n >> x;
		int a[n];
		multimap<int, int> mp;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			int m = abs(x - a[i]);
			mp.insert({m, a[i]}); //map sap xep theo key tang dan
		}
	
		for (auto x : mp)
			cout << x.second << " "; 
		cout << endl;
	}
}
