#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore(1);
	while (t--)
	{
		string s;
		cin >> s;
		if (s[s.length()-1] == '6' && s[s.length()-2] == '8')
			cout << "1\n";
		else
			cout << "0\n";
	}
	return 0;
}
