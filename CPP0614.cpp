#include <bits/stdc++.h>

using namespace std;

class NhanVien{
	private:
		string ma, ten, gt, ns, dc, thue, nk;
		static int dem;
	public:
		friend istream& operator >> (istream&, NhanVien&);
		friend ostream& operator << (ostream&, NhanVien);
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

ostream& operator << (ostream& out, NhanVien a)
{
	out << a.ma << " ";
	out << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.thue << " " << a.nk << endl;
	//return out; 
}

int main(){
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for(i = 0; i < N; i++) cin >> ds[i];
    for(i = 0; i < N; i++) cout << ds[i];
    return 0;
}
