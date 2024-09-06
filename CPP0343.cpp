#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		getline (cin, s);
		stringstream ss (s);
		string token;
		vector<int> v;
		while (ss >> token)
		{
			int tmp = stoi(token);
			v.push_back(tmp);
		}
		int chan = 0, le = 0;
		for (auto x : v)
		{
			if (x % 2 == 0)
				chan++;
			else 
				le++;
		}
		int size = v.size();
		if((size % 2 == 0 && chan > le) || (size % 2 != 0 && chan < le))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}
