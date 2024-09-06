#include <bits/stdc++.h>

using namespace std;

int tong(string s)
{
	int b = 0;
	for (int i = 0; i < s.length(); i++)
	{
		int a = s[i] - '0';
		b += a;
	}
	return b;
}

string xauso(int n)
{
	stringstream ss;
	ss << n;
	return ss.str();
}

int main()
{
	int t;
	cin >> t;
	cin.ignore(1);
	while (t--)
	{
		int n;
		string s;
		cin >> s;
		while (s.length() > 1)
		{
			n = tong(s);
			s = xauso(n);
		}
		cout << n << endl;
	}
	return 0;
}
