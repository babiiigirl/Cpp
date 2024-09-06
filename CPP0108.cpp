#include <bits/stdc++.h>

using namespace std;

bool sotang(int n)
{
	while (n>=10)
	{
		int r = n%10;
		if (r <= (n/10)%10)
			return false;
		n /= 10;
	}
	return true;
 } 
 
bool sogiam(int n)
{
	while (n>=10)
	{
		int r = n%10;
		if (r >= (n/10)%10)
			return false;
		n /= 10;
	}
	return true;
 }

int snt(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return 0;
	}
	return n > 1;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int cnt = 0;
		for (int i = pow(10, n-1); i < pow(10, n); i++)
		{
			if(sotang(i) || sogiam(i))
			{
			    if(snt(i))
		    		++cnt;
			}
		}
		cout << cnt << endl;
	}
}
