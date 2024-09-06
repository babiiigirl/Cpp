#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int f[1001];
void fibo()
{
	int fb[20];
	fb[0] = 0; fb[1] = 1;
	for (int i = 2; i <= 19; i++)
	{
		fb[i] = fb[i-1] + fb[i-2];
	}
	for (int i = 0; fb[i] <= 1000; i++)
	{
		f[fb[i]] = 1;
	}
} 

int main()
{
	fibo();
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
		{
			if(f[a[i]]) cout << a[i] << " ";
		}
		cout << endl;
	}
}
