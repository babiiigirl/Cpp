#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		char c;
		cin >> c;
		if (c >= 'a' && c <= 'z') 
			cout << char(c - 32) << "\n";
		else
			cout << char (c + 32) << "\n";
	}
	return 0;
}
