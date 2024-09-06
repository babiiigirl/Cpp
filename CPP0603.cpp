#include <bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string id, name, lop, day;
		float gpa;
	public:
		friend void chuanHoa(SinhVien&);
		friend istream& operator >> (istream &in, SinhVien& a);
		friend ostream& operator << (ostream &out, SinhVien a);
}; 


void chuanHoa(SinhVien &a)
{
	string res = " ";
	stringstream ss(a.name);
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
	a.name = res;
}

istream& operator >> (istream &in, SinhVien& a){
	getline(in, a.name);
	in >> a.lop >> a.day >> a.gpa;
	return in;
}
ostream& operator << (ostream& out, SinhVien a)
{
	if (a.day[1] == '/') a.day = '0' + a.day;
	if (a.day[4] == '/') a.day.insert(a.day.begin() + 3,'0');
	chuanHoa(a);
	cout << "B20DCCN001";
	cout << a.name << " ";
	cout << a.lop << " ";
	cout << a.day << " ";
	cout << fixed << setprecision(2) << a.gpa;
	return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}


