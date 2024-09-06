#include <bits/stdc++.h>

using namespace std;

class NhanVien{
	private:
		string ma, ten, gt, ns, dc, thue, nk;
		static int dem;
	public:
		friend istream& operator >> (istream&, NhanVien&);
		friend ostream& operator << (ostream&, NhanVien);
		friend bool cmp (NhanVien&, NhanVien&);
}; 

int NhanVien::dem = 0;

istream& operator >> (istream& in, NhanVien& a)
{
	in.ignore();
	++NhanVien::dem;
	a.ma = string(5 - to_string(NhanVien::dem).length(), '0') + to_string(NhanVien::dem);
	getline(in, a.ten);
	in >> a.gt >> a.ns;
	in.ignore();
	getline(in, a.dc);
	in >> a.thue >> a.nk;
	return in;
}

bool cmp (NhanVien& a, NhanVien& b)
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

ostream& operator << (ostream& out, NhanVien a)
{
	out << a.ma << " ";
	out << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.thue << " " << a.nk << endl;
	return out; 
}


int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) cin >> ds[i];
    sapxep(ds, N);
    for(i = 0; i < N; i++) cout << ds[i];
    return 0;
}
