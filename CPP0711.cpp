#include <bits/stdc++.h>

using namespace std;

//int n, a[100], final = 0;

void ktao(int n, int a[])
{
	for (int i = 1; i <= n; i++)
		a[i] = 0;
 } 

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[100];
		ktao(n, a);
		int final = 0;
		while (final == 0)
		{
			for (int i = 1; i <= n; i++)
				cout << a[i];
			cout << " ";
			int i = n;
			while (i >= 1 && a[i] == 1)
			{
				a[i] = 0;
				--i;
			}
			if (i == 0)
				final = 1;
			else
				a[i] = 1;
		}
		cout << endl;
	}
		
}
