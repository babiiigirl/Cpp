#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int x, y, p; cin >> x >> y >> p;
		int k;
		for (int i = 1; i <= y; i++)
		{
			k = (x%i) * (x%i) * p * (x%i) * p;
		}
		cout << k << endl;
	}
 } 
