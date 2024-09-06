#include <bits/stdc++.h>

using namespace std;

int check(string s)
{
	int sum = 0;
	for (int i = 0; i < s.length(); i++)
	{
		sum += s[i] - '0';
	}
	if (sum == 9)
		return 1; 
	while (sum > 9)
	{
		int tong = 0;
		while (sum)
		{
			tong += sum%10;
			sum /= 10;
		}
		if (tong == 9)
			return 1;
		sum = tong;
	}
	return 0;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		cout << check(s) << endl;
	}
	return 0;
}
