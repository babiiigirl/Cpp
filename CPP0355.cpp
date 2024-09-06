#include <bits/stdc++.h>

using namespace std;

string test1(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = tolower(s[i]);
	}
	return s;
}

string test2(string s)
{
	s[0] = toupper(s[0]);
	return s;
}

int main()
{
	string s;
	int ok = 1;
	while (cin >> s)
	{
		int n = s.size();
		s = test1(s);
		if (ok)
		{
			s[0] -= 32;
			ok = 0;
		}
		if (s[n-1] == '.' || s[n-1] == '!' || s[n-1] == '?')
		{
			s.erase(s.end() - 1);
			cout << s << endl;
			ok = 1;
		}
		else
			cout << s << " ";
	}
}
