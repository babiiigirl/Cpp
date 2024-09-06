#include <bits/stdc++.h>

using namespace std;

void test(string s, int n)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while (ss >> tmp)
	{
		v.push_back(tmp);
	}
	for (int i = 0; i < v.size(); i++)
	{
		v[i][0] = toupper(v[i][0]);
	}
	if (n == 1)
	{
		cout << v.back() << " ";
		for (int i = 0; i < v.size() - 1; i++)
			cout << v[i] << " ";
	}
	if (n == 2)
	{
		for (int i = 1; i < v.size(); i++)
			cout << v[i] << " ";
		cout << v[0];
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		cin.ignore();
		string s; getline(cin, s);
		test(s, n);
		cout << endl;
	}
}
