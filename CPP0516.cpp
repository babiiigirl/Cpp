#include <bits/stdc++.h>

using namespace std;

struct MatHang{
	int ma;
	string ten, nhom;
	float mua, ban;
}; 

void nhap(MatHang ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		getline(cin, ds[i].ten);
		getline(cin, ds[i].nhom);
		cin >> ds[i].mua >> ds[i].ban;
		ds[i].ma = i + 1;
	}
}

bool cmp(MatHang& a, MatHang& b)
{
	return a.ban - a.mua > b.ban - b.mua;
}

void sapxep(MatHang ds[], int n)
{
	sort(ds, ds + n, cmp);
}

void in(MatHang ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << ds[i].ma << " ";
		cout << ds[i].ten << " " << ds[i].nhom << " ";
		cout << fixed << setprecision(2) << ds[i].ban - ds[i].mua << endl;
	}
}

int main()
{
	int n; cin >> n;
	struct MatHang ds[n];
	nhap(ds, n);
	sapxep(ds, n);
	in(ds, n);
	return 0;
}
