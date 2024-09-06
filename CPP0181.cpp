#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	return (b, a%b);
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		ll a, x, y; cin >> a >> x >> y;
		ll d = __gcd(x, y);
		while (d--)
			cout << a;
		cout << endl;
	} 
}
