#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	cin.ignore(1);
	while(t--)
	{
		string s;
		getline (cin, s);
		int sum = 0;
		for (int i = 0; i < s.length(); i++)
		{
			int k = s[i] - '0';
			if (i % 2 == 0)
				sum += k;
			else 
				sum -= k;
		}
		if (sum%11 == 0)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
 } 
