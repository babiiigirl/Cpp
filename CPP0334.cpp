#include <bits/stdc++.h>

using namespace std;

void test(string s)
{
	int sum = 0;
	int t = 0;
	s[s.length()] = 'a';
	for (int i = 0; i <= s.length(); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			sum = sum*10 + s[i] - '0';
		}
		else
		{
			t += sum;
			sum = 0;
		}
	}
	cout << t << endl;
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
