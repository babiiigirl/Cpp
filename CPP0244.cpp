#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n; cin >> n;
	int a[n];
	int b[1000] = {0};
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}	
	sort(a, a+n);
	for (int i = 0; i < n; i++)
		b[a[i]]++;
	for (int i = 0; i < n; i++)
	{
		if (b[a[i]])
		{
			cout << a[i] << " ";
			b[a[i]] = 0;
		}
	}
	return 0;
}
