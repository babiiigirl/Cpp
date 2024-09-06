#include <bits/stdc++.h>

using namespace std;

void test(int n)
{
	vector<int> v;
	set<int> s;
	for (int i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			v.push_back(i);
			s.insert(i);
			//cout << i << " ";
			n /= i;
		}
	}
	if (v.size() == 3 && v.size() == s.size())
		cout << "1\n";
	else 
		cout << "0\n";
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		test(n);
	} 
}
