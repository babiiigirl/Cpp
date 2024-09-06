#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore(1);
	while (t--)
	{
		string s;
		getline (cin, s);
		int dem[100] = {0};
		for (int i = 0; i < s.size(); i++)
		{
			dem[s[i]]++;
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (dem[s[i]] != 0)
			{
				cout << s[i] << dem[s[i]];
				dem[s[i]] = 0;
			}
		}
		cout << endl;
	}
	return 0;
}
