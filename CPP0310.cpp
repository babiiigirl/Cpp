#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll max(ll a)
{
	string res = to_string(a);
	for (int i = 0; i < res.length(); i++)
	{
		if (res[i] == '5')
		{
			res[i] = '6';
		}
	}
	ll ans = stoll(res);
	return ans;
}

ll min(ll a)
{
	string res = to_string(a);
	for (int i = 0; i < res.length(); i++)
	{
		if (res[i] == '6')
		{
			res[i] = '5';
		}
	}
	ll ans = stoll(res);
	return ans;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		ll x1, x2; cin >> x1 >> x2;
		cout << min(x1) + min(x2) << " "<< max(x1) + max(x2) << endl;
	}
}
