#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	string s;
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
	for (int i = 0 ; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			x = i;
		}
	}
	while(s[x] == ' ')
	{
		x--;
	}
	cout << (char)(s[0] - 32);
	for (int i = 1; i <= x; i++)
	{
		if(s[i] == ' '& s[i-1] == ' ')
			continue;
		else if(s[i-1] == ' ')
			cout << (char)(s[i] - 32);
		else
			cout << (char)(s[i]);
	}
	cout << ", ";
	for (int i = x+1; i < s.length(); i++)
	{
		if(s[i] != ' ')
			cout << (char)(s[i] - 32);
	}
	
}
