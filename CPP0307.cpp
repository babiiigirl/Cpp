#include <bits/stdc++.h>

using namespace std;

void test(string a, string b)
{
	vector<string> v1, v2;
	stringstream s1(a);
	string word;
	while (s1 >> word)
	{
		v1.push_back(word);
	}
	sort(v1.begin(), v1.end());
	stringstream s2(b);
	while (s2 >> word)
	{
		v2.push_back(word);
	}
	sort(v2.begin(), v2.end());
	set<string> s;
	for (int i = 0; i < v1.size(); i++)
	{
		bool found = (binary_search(v2.begin(), v2.end(), v1[i]));
		if (!found)
			s.insert(v1[i]);
	}
	for (auto x : s)
		cout << x << " ";
 } 

int main()
{
	int t; cin >> t;	
	cin.ignore();
	while (t--)
	{
		string a, b;
		getline(cin, a);
		getline(cin, b);
		test(a, b);
		cout << endl;
	}
}
