#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int mod = 1e9 + 7; 
 
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		ll f[10000];
		f[0] = 0; f[1] = 1; 
		
		for (int i = 2; i <= n; i++)
		{
			f[i] = (f[i - 1]%mod + f[i - 2]%mod) % mod;
		}
		cout << f[n] << endl;
	}
}
