#include <bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string ma, ten, lop, mail;
	public:
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
		friend bool cmp(SinhVien&, SinhVien&);
};

istream& operator >> (istream& in, SinhVien& a)
{
	in >> a.ma;
	in.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.mail;
	return in;	
}

ostream& operator << (ostream& out, SinhVien a)
{
	out << a.ma << " " << a.ten << " " << a.lop << " ";
	out << a.mail << endl;
	return out;
}

bool cmp(SinhVien& a, SinhVien& b)
{
	if(a.lop == b.lop)
	{
		return a.ma < b.ma;
	}
	return a.lop < b.lop;
	
}

void sapxep(SinhVien ds[], int n)
{
	sort(ds, ds + n, cmp);
}

int main()
{
	int n; cin >> n;
	SinhVien ds[1000];
	for (int i = 0; i < n; i++)
	{
		cin >> ds[i];
	}
	sapxep(ds, n);
	for (int i = 0; i < n; i++)
	{
		cout << ds[i];
	}
	return 0;
}
