#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n, k; cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		vector <int> v;
		int tmp;
		for (int i = 0; i < n-1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				tmp = a[i] + a[j];
				v.push_back(tmp);
			}
		}
		int cnt = 0;
		for (int i = 0; i < v.size(); i++)
		{
			if(v[i] == k)
			{
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
 } 
