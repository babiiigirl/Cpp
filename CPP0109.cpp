#include <bits/stdc++.h>

using namespace std;

int check(int n)
{
	int d = 0;
	int chan = 0, le = 0;
	while (n)
	{
		int r = n%10;
		d++;
		if (r % 2 == 0) chan++;
		else le++;
		n /= 10;
	}
	if (d % 2 == 0)
	{
		if (chan == le)
			return 1;
		else 
			return 0;
	}
	else 
		return 0;
}

int main()
{
	int n;
	cin >> n;
	int dem = 0;
	for (int i = pow(10, n-1); i < pow(10,n) - 1; i++)
	{
		if (check(i))
		{
			cout << i << " ";
			dem++;
			if (dem % 10 == 0)
				cout << endl;
		}			
	}
	return 0;
 } 
