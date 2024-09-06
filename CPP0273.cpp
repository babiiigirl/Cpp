#include <bits/stdc++.h>

using namespace std;

int test(int a[], int n)
{
	int sum = 0;
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	} 
	for (int i = 0; i < n; i++)
	{
		if (s*2 == sum - a[i])
		{
			return i+1;
			break;
		}
		s += a[i];
	}
	return -1;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[100001];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		cout << test(a, n) << endl;
	}
	return 0;
}
