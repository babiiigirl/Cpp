#include <bits/stdc++.h>

using namespace std;

int test(int n, int a[])
{
	int max = -1;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				int ans = a[j] - a[i];
				if (ans > max)	max = ans;
			}
		}	
	}
	return max;	
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		cout << test(n, a) << endl;
	} 
}
