#include <bits/stdc++.h>

using namespace std;

long long check(string s)
{
	long long res = 0;
	int n = s.size();
	if (n > 9)
		return 0;
	for (int i = 0; i < n; i++)
	{
		if (!isdigit(s[i]))
			return 0;
		else
			res = res * 10 + s[i] - '0';
	}
	if (res > INT_MAX)
		return 0;
	else
		return res;
}

int main()
{
	fstream in;
	in.open("DATA.in", ios::in);
	long long sum = 0;
	string s;
	while (in >> s)
	{
		sum += check(s);
	}
	cout << sum;
}
