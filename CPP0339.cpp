#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin >> s;
		int cnt = 0;
		for (int i = 0; i < s.size(); i++)
		{
			for (int j = s.size() - 1; j >= i; j--)
			{
				if(s[i] == s[j])
					cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
 } 
