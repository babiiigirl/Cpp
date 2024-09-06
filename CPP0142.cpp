#include <bits/stdc++.h>

using namespace std;

int ucln(int a, int b)
{
	while(b!=0)
	{
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int snt(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return 0;
	}
	return n > 1;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int cnt = 0;
		int n; cin >> n;
		for (int i = 1; i <= n; i++)
		{
			if(ucln(i, n) == 1)
				cnt++;
		}
		if(snt(cnt))
			cout << "1\n";
		else
			cout << "0\n";
	}
}
