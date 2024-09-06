#include <bits/stdc++.h>

using namespace std;

int snt(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return 0;
	}
	return n>1;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int cnt = 0;
		int l, r; cin >> l >> r;
		for (int i = l; i <= r; i++)
		{
			if(snt(i))	++cnt;
		}
		cout << cnt << endl;
	}
}
