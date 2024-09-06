#include <bits/stdc++.h>

using namespace std;

void test(string s)
{
	int sum = 0;
	int max = -1e9;
	for (int i = 0; i <= s.length(); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			sum = sum*10 + s[i] - '0';
		}
		else
		{
			if (sum > max)
				max = sum;
			sum = 0;
		}
	}
	cout << max << endl;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		test(s);
	}
	return 0;
}
