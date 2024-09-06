#include <bits/stdc++.h>

using namespace std;

struct NhanVien{
	string ma, ten, gioitinh, ngaysinh, diachi, thue, khd;
	
	NhanVien(){
		ma = "00001";
	}
};

void nhap(struct NhanVien &a)
{
	getline(cin, a.ten);
	cin >> a.gioitinh >> a.ngaysinh;
	cin.ignore();
	getline(cin, a.diachi);
	cin >> a.thue >> a.khd;
}

void in(struct NhanVien a)
{
	cout << a.ma << ' ' << a.ten << ' '<< a.gioitinh << ' ' << a.ngaysinh << ' ' << a.diachi << ' ' << a.thue << ' ' << a.khd;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
