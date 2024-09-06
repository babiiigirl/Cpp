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
		int cnt = 0;
		if(n < k)
			cnt = n*(n+1)/2;
		else
			cnt = d*k*(k-1)/2 + e*(e+1)/2;
		if (cnt == k)
			cout << "1\n";
		else
			cout << "0\n";
	}
	return 0;
 } 
