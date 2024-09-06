#include <bits/stdc++.h>

using namespace std;

int main()
{
	fstream in;
	in.open("VANBAN.in", ios::in);
	string s;
	map<string, int> mp;
	while (in >> s)
	{
		for (int i = 0; i < s.size(); i++)
			s[i] = tolower(s[i]);
		mp[s]++;
	}
	for (auto it : mp)
	{
		cout << it.first << endl;
	}
}
