#include <bits/stdc++.h>

using namespace std;

void test(int a[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		if (a[i] != 0 && a[i] == a[i+1])
		{
			a[i] *= 2;
			a[i+1] = 0;
		}
	}
	for (int i = 0 ; i < n; i++)
	{
		if (a[i] != 0)
			cout << a[i] << " ";
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			cout << a[i] << " ";
	}
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
		test(a, n);
		cout << endl;
	}
 } 
