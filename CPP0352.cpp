#include <bits/stdc++.h>

using namespace std;

string chuanhoa(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = tolower(s[i]);
	}
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while (ss >> tmp)
	{
		v.push_back(tmp);
	}
	string res;
	res = v.back();
	//cout << v.back();
	for (int i = 0; i < v.size()-1; i++)
		res += v[i][0];
		//cout << v[i][0];
	//cout << "@ptit.edu.vn\n";
	return res;
}

int main()
{
	int t; cin >> t;
	map<string, int> mp;
	while (t--)	
	{
		string s; 
		scanf("\n");
		getline(cin, s);
		s = chuanhoa(s);
		cout << s;
		mp[s]++;
		if (mp[s] > 1 )
			cout << mp[s];
		cout << "@ptit.edu.vn\n";
	}
	return 0;
}
