#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
	string ma, ten, lop, ngaysinh;
	float gpa;
	
	SinhVien(){
		ma = "B20DCCN001";
	}
};

void nhap(struct SinhVien &a)
{
	getline(cin, a.ten);
	cin >> a.lop >> a.ngaysinh >> a.gpa;
}

void in(struct SinhVien a)
{
	if(a.ngaysinh[1]=='/') a.ngaysinh.insert(0,1,'0');
	if(a.ngaysinh[4]=='/') a.ngaysinh.insert(3,1,'0');
	cout << a.ma << ' ' << a.ten << ' ' << a.lop << ' ' << a.ngaysinh << ' ' << fixed << setprecision(2) << a.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
