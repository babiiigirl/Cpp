#include <bits/stdc++.h>

using namespace std;


void solve(string s)
{
	map<char, int> mp;
	int max = 0;
	for (int i = 0; i < s.size(); i++)
	{
		mp[s[i]]++;
		if (max <= mp[s[i]])
			max = mp[s[i]];
	}
	if (s.size() - max >= max - 1)
		cout << "1\n";
	else
		cout <<"0\n"; 
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		solve(s);
	}
}
