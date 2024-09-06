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
		cin >> s; 	
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '0' && s[i+1] == '8' && s[i+2] == '4')
			{
				cout << s.substr(0, i) << s.substr(i+3, s.length() - i - 3) << endl;
				break;
			}
		}
	} 
	return 0;
 } 
