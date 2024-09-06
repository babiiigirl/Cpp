#include <bits/stdc++.h>

using namespace std;

struct NhanVien{
	string ma, ten, gt, ns, dc, thue, nk;
};

int dem = 0;

void nhap(NhanVien& a)
{
	++dem;
	a.ma = string(5 - to_string(dem).length(), '0') + to_string(dem);
	scanf("\n");
	getline(cin, a.ten);
	cin >> a.gt >> a.ns;
	scanf("\n");
	getline(cin, a.dc);
	cin >> a.thue >> a.nk;
}

void inds(NhanVien ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << ds[i].ma << " ";
		cout << ds[i].ten << " " << ds[i].gt << " " << ds[i].ns << " " << ds[i].dc << " " << ds[i].thue << " " << ds[i].nk << endl;
	}
}

bool cmp(NhanVien& a, NhanVien& b)
{
	string y1 = a.ns.substr(6, 4);
	string y2 = b.ns.substr(6, 4);
	string d1 = a.ns.substr(3, 2);
	string d2 = b.ns.substr(3, 2);
	string m1 = a.ns.substr(0, 2);
	string m2 = b.ns.substr(0, 2);
	if(y1 == y2)
	{
		if(m1 == m2)
			return d1 < d2;
		return m1 < m2;
	}
	return y1 < y2;
}

void sapxep(NhanVien ds[], int n)
{
	sort(ds, ds + n, cmp);
}

int main()
{
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
