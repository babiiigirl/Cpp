#include <bits/stdc++.h>

using namespace std;

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
		int n; cin >> n;
		//cout << "1 ";
		vector<int> v;
		v.push_back(1);
		for (int i = 2; i <= n; i++)
		{
			for (int j = 2; j <= i; j++)
			{
				if (i%j == 0 && snt(j))
				{
					v.push_back(j);
					break;
				}	
			}
		}
		for (auto x : v)
		{
			cout << x << " ";
		}
		cout << endl;
	}
}
