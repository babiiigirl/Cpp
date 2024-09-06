#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; 
		long long k;
		cin >> n >> k;
		int e = n%k, d = n/k;
		if(n < k)
			cout << n*(n+1)/2 << endl;
		else
			cout << d*k*(k-1)/2 + e*(e+1)/2 << endl;
	}
	return 0;
 } 
