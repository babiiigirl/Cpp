#include <bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string ma, ten, lop, ns;
		float gpa;
	public:
		SinhVien(){
			this -> ma = this -> ten = this -> lop = this -> ns = "";
			this -> gpa = 0;
		}
		~SinhVien(){
		}
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
};

istream& operator >> (istream& in, SinhVien& a)
{
	a.ma = "B20DCCN001";
	getline(in, a.ten);
	in >> a.lop >> a.ns >> a.gpa;
	return in;
}

ostream& operator << (ostream& out, SinhVien a)
{
	if (a.ns[1] == '/')	a.ns = '0' + a.ns;
	if (a.ns[4] == '/')	a.ns.insert(a.ns.begin() + 3, '0');
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " ";
	out << fixed << setprecision(2) << a.gpa << endl;
	return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
