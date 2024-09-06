#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcd(ll a, ll b)
{
	while (b != 0)
	{
		ll r = a%b;
		a = b;
		b = r;
	 } 
	return a;
 }

ll lcm(ll a, ll b)
{
	return a*b / gcd(a, b);
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		ll cnt = 1;
		for (int i = 1; i <= n; i++)
			cnt = lcm (cnt, i);
		cout << cnt << endl;
	}
	return 0;
}
