#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
	string ten, ma, ns;
	float gpa;
	
	void nhap(){
		getline (cin, ten);
		cin >> ma >> ns >> gpa;
	}
	
	void xuat(){
		if (ns[1] == '/') ns.insert(0, 1, '0');
		if (ns[4] == '/') ns.insert(3, 1, '0');
		cout << "B20DCCN001" << " " << ten << " " << ma << " " << ns << " ";
		cout << fixed << setprecision(2) << gpa;
	}
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
