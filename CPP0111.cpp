#include <bits/stdc++.h>

using namespace std;

bool check(string s)
{
	for (int i = 1; i < s.length()-1; i++)
	{
		if(abs((s[i] - '0') - (s[i-1] - '0')) != 1 || abs((s[i] - '0') - (s[i+1] - '0')) != 1)
		{
			return false;
			break;
		}
	}
	return true;
}

int main()
{
	int t;
	cin >> t;
	cin.ignore(1);
	while (t--)
	{
		string s;
		cin >> s;
		if (check(s))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
	return 0;
 } 
