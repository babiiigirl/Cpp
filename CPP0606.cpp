#include <bits/stdc++.h>

using namespace std;

class NhanVien{
	private:
		string ten, gt, ns, dc, thue, ngay;
	public:
		friend istream& operator >> (istream& in, NhanVien &a);
		friend ostream& operator << (ostream& out, NhanVien a);
};

istream& operator >> (istream& in, NhanVien& a)
{
	getline (in, a.ten);
	in >> a.gt >> a.ns;
	in.ignore();
	getline (in, a.dc);
	in >> a.thue >> a.ngay;
	return in;
}

ostream& operator << (ostream& out, NhanVien a)
{
	cout << "00001 ";
	cout << a.ten << " ";
	cout << a.gt << " " << a.ns << " " << a.dc << " " << a.thue << " " << a.ngay;
	return out;
}

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
