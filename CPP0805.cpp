#include <bits/stdc++.h>

using namespace std;

string tlwer(string s)
{
	for(int i = 0; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
	}
	return s;
}

int main()
{
	fstream in1, in2;
	in1.open("DATA1.in", ios::in);
	in2.open("DATA2.in", ios::in);
	string a;
	set<string> s;
	set<string> s1;
	set<string> s2;
	while (in1 >> a)
	{
		a = tlwer(a);
		s.insert(a);
		s1.insert(a);
	}
	while (in2 >> a)
	{
		a = tlwer(a);
		s.insert(a);
		s2.insert(a);
	}
	for (auto x : s)
	{
		cout << x << " ";
	}
	cout << endl;
	for (auto x : s1)
	{
		if(s2.find(x) != s2.end())
			cout << x << " ";
	}
}
