#include <iostream>
#include <cstring>

using namespace std;

int check(char s[])
{
	for (int i = 0; i < strlen(s)/2; i++)
	{
		if (s[i] != s[strlen(s)- i - 1])
			return 0;
	}
	return 1;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		char s[100];
		cin >> s;
		if (check(s)) 
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
	return 0;
}
