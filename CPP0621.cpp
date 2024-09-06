#include <bits/stdc++.h>

using namespace std;

class  SinhVien{
	private:
		string ma, ten, lop, email;
	public:
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
		friend bool cmp (SinhVien&, SinhVien&);
};

istream& operator >> (istream& in, SinhVien& a)
{
	in >> a.ma;
	in.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.email; 
	return in;
}

ostream& operator << (ostream& out, SinhVien a)
{
	return out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl; 
}

bool cmp(SinhVien& a, SinhVien& b)
{
	return a.ma < b.ma;
}

int main()
{
	vector<SinhVien> v;
	SinhVien x;
	while(cin >> x)
	{
		v.push_back(x);
	}
	sort(v.begin(), v.end(), cmp);
	for (auto x : v)
		cout << x;
}
