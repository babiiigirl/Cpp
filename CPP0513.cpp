#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
	string ma, ten, lop, ns;
	float gpa;
};

void nhap(struct SinhVien *ds, int n)
{
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		getline(cin, ds[i].ten);
		cin >> ds[i].lop >> ds[i].ns >> ds[i].gpa;
	}
 } 
 
void chuanhoa(struct SinhVien& a)
{
	if(a.ns[1] == '/') a.ns = "0" + a.ns;
	if(a.ns[4] == '/') a.ns.insert(a.ns.begin() + 3, '0');
}
 
void in(struct SinhVien ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		chuanhoa(ds[i]);
		cout << "B20DCCN0";
		if ((i+1) < 10) cout << "0";
		cout << i+1 <<" ";
		cout << ds[i].ten << " " << ds[i].lop << " " << ds[i].ns << " ";
		cout << fixed << setprecision(2) << ds[i].gpa << endl;
	}
}

int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
