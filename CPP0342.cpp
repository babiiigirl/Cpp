#include <bits/stdc++.h>

using namespace std;

void test(string s)
{
	vector<char> v;
	int sum = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			sum += s[i] - '0';
		else
			v.push_back(s[i]);
	}
	sort(v.begin(), v.end());
	for (auto x : v)
		cout << x;
	cout << sum << endl;
}

int main()
{
	int t; cin >> t;
	cin.ignore();
	while (t--)
	{
		string s; cin >> s;
		test(s);
	 } 
 } 
