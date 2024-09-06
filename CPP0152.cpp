#include <bits/stdc++.h>

using namespace std;

main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, m;
		cin >> a >> m;
		int check = 0;
		for (int i = 0; i <= m; i++)
		{
			if (a*i%m == 1)
			{
				cout << i << endl;
				check = 1;
				break;
			}
		}
		if (check == 0) cout << -1 <<endl;
	}
}
