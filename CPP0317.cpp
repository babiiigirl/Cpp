#include <bits/stdc++.h>

using namespace std;

bool check1(string s)
{
	for (int i = 0; i < s.length()/2; i++)
	{
		if (s[i] != s[s.length() - i - 1])
			return false;
	}
	return true;
 } 
 
bool check2(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if((s[i] - '0') % 2 != 0)
			return false;
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
		getline(cin, s);
		if(check1(s) && check2(s))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
