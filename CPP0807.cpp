#include <bits/stdc++.h>

using namespace std;

class InSet{
	int n, a[n];
	int m, b[m];
	set<int> sa;
	set<int> sb;
	void nhap()
	{
		in >> n >> m;
		for (int i = 0; i < n; i++)
		{
			in >> a[i];
			sa.insert(a[i]);
		}
		for (int i = 0; i < m; i++)
		{
			in >> b[i];
			sb.insert(b[i]);
		}
	}
	void xuat()
	{
		for (auto x : sa)
		{
			if (sb.find(x) != sb.end())
				cout << x << " ";
		}
	}
};

int main()
{
	fstream in;
	in.open("DATA.in", ios::in);
	InSet x;
	x.nhap();
	x.xuat();
}
