#include <bits/stdc++.h>

using namespace std;

void check(string s)
{
	set<char> st;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[0] == '0')
		{
			cout << "INVALID\n";
			return;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			st.insert(s[i]);
		}
		else
		{
			cout << "INVALID\n";
			return;
		}
	}
	if (st.size() == 10)
	{
		cout << "YES\n";
		return;
	}
	if (st.size() < 10)
	{
		cout << "NO\n";
		return;
	}	
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		check(s);
	}
	return 0;
}
