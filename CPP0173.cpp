#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
	if (b == 0) return a;
	return gcd (b, a%b);
}

ll lcm(ll a, ll b)
{
	return a*b / gcd(a, b);
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		ll x, y, z, n;
		cin >> x >> y >> z >> n;
		ll bc = lcm(lcm(x, y), z);
		ll a = pow(10, n-1), b = pow(10, n);
		if (bc >= b)
			cout << -1 << endl;
		else
		{
			ll d = a % bc, ans = a + bc - d;
			if (d == 0)
				cout << a << endl;
			else 
				cout << ans << endl;
		}
	}
}
