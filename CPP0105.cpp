#include <bits/stdc++.h>

using namespace std;

int locphat(int n)
{
	int r;
	while (n)
	{
		r = n%10;
		n /= 10;
		if (r != 6 && r != 0 && r != 8)
			return 0;
	}
	return 1;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		if (locphat(n)) 
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
	return 0;
}
