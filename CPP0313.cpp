#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	string word; cin >> word;
	stringstream ss(s);
	string tmp;
	while (ss >> tmp)
	{
		if(tmp != word)
		cout << tmp <<" ";
	}
}
