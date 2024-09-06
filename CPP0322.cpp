#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string x, y;
		cin >> x >> y;
		reverse(x.begin(), x.end());
		reverse(y.begin(), y.end());
		string res;
		if (x.length() <= y.length())
		{
			//x.insert(x.length(), '0', y.length() - x.length());
			x = x + string(y.length() - x.length(), '0');
			for (int i = 0; i < y.length(); i++)
			{
				int ans = x[i] - '0' + y[i] - '0';
				string tmp = to_string(ans);
				if (tmp.length() == 1)
				{
					res += tmp;
				}
				else
				{
					res += tmp[tmp.length() - 1];
					++ans;
				}
			}
		}
		for (int i = res.length() - 1; i >= 0; i--)
			cout << res[i];
		cout << endl;
	}
}
