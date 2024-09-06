#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	cin.ignore(1);
	while (t--)
	{
		int dem = 0;
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		while (ss >> tmp) dem++;
		cout << dem << endl;
	}
}
