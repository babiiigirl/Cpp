#include <bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string ma, ten, lop, ns;
		float gpa;
		static int dem;
	public:
		SinhVien(){
			this -> ma = this -> ten = this -> lop = this -> ns = " ";
			this -> gpa = 0;
		}
		~SinhVien(){
		}
		friend void chuanhoa(SinhVien&);
		friend istream& operator >> (istream&, SinhVien&);
		friend ostream& operator << (ostream&, SinhVien);
		friend bool cmp (SinhVien&, SinhVien&);
};

void chuanhoa(SinhVien& a)
{
	string res = "";
	stringstream ss(a.ten);
	string tmp;
	while (ss >> tmp)
	{
		res += toupper(tmp[0]);
		for (int i = 1; i < tmp.length(); i++)
		{
			res += tolower(tmp[i]);
		}
		res += " ";
	}
	res.erase(res.length() - 1);
	a.ten = res;
}

int SinhVien::dem = 0;

istream& operator >> (istream& in, SinhVien& a)
{
	in.ignore();
	++SinhVien::dem;
	a.ma = "B20DCCN" + string(3 - to_string(SinhVien::dem).length(), '0') + to_string(SinhVien::dem);
	getline(in, a.ten);
	chuanhoa(a);
	in >> a.lop >> a.ns >> a.gpa;
	return in;
}

ostream& operator << (ostream& out, SinhVien a)
{
	if (a.ns[1] == '/') a.ns = '0' + a.ns;
	if (a.ns[4] == '/') a.ns.insert(a.ns.begin() + 3, '0');
	out << a.ma << " ";
	out << a.ten << " " << a.lop << " " << a.ns << " ";
	out << fixed << setprecision(2) << a.gpa << endl;
	return out;
}

bool cmp (SinhVien& a, SinhVien& b)
{
	return a.gpa > b.gpa; 
}

void sapxep(SinhVien ds[], int n)
{
	sort (ds, ds + n, cmp);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i = 0; i < N; i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i = 0; i < N; i++){
        cout << ds[i];
    }
    return 0;
}

