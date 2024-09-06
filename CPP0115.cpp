#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		while (n>1)
		{
			for (int i = 2; i <= n; i++)
			{
				int dem = 0;
				while (n % i == 0)
				{
					dem++;
					n /= i;
				}
				if (dem != 0)
					cout << i << " " << dem << " ";
			}
		}
		cout << endl;
	}
}
