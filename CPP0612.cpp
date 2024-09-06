#include <bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string ma, ten, lop, ns;
		float gpa;
		static int dem;
	public:
		SinhVien(); //ham khoi tao khong co tham so, gan cac gia tri thuoc tinh o trang thai mac dinh
		~SinhVien(); //ham huy
		friend void chuanHoa(SinhVien&);
		friend istream& operator >> (istream& in, SinhVien& a);
		friend ostream& operator << (ostream& out, SinhVien a);
};

SinhVien::SinhVien()
{
	this->ma = this->ten = this->lop = this->ns = "";
	this->gpa = 0;
}

SinhVien::~SinhVien(){
} //doi tuong duoc huy tai day

void chuanHoa(SinhVien &a)
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

istream& operator >> (istream& in, SinhVien &a)
{ 
	if (SinhVien::dem == 0) in.ignore();
	++SinhVien::dem; // dem = 1
	a.ma = "B20DCCN" + string(3 - to_string(SinhVien::dem).length(), '0') + to_string(SinhVien::dem); //dem = 1 => 'B20DCCN' + '00' + '1'
	getline(in, a.ten);
	chuanHoa(a);
	in >> a.lop >> a.ns >> a.gpa;
	in.ignore();
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

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0; i<N; i++){
        cin >> ds[i];
    }
    for(i=0; i<N; i++){
        cout << ds[i];
    }
    return 0;
}
