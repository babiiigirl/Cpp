#include <bits/stdc++.h>

using namespace std;

void test(int a[], int n)
{ 
	int b[n];
	for (int i = 0; i < n; i++)
		b[i] = a[i];
	sort(a, a + n);
	for (int i = 0; i < n; i++)
	{
		if(a[i] != b[i])
		{
			cout << i+1 << " ";
			break;
		}
	}
	for (int i = n-1; i >= 0; i--)
	{
		if (a[i] != b[i])
		{
			cout << i+1 << endl;
			break;
		}
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
	}
}
