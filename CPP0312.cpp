#include <bits/stdc++.h>

using namespace std;

int b[100000] = {0};

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		if (s.length() < 26)
		{
			cout << 0 << endl;
			continue;
		}
		for (int i = 0; i < s.length(); i++)
		{
			b[s[i]]++;
		 } 
		int dem = 0; 
		for (int i = 0; i < s.length(); i++)
		{
			if (b[s[i]] != 0)
			{
				dem++;
				b[s[i]] = 0;
			}
		}

		if ((26 - dem) <= k)
			cout << "1\n"; 
		else 
			cout << "0\n"; 
	}
}
