#include <bits/stdc++.h>

using namespace std;

struct ThiSinh{
	string name;
	string date;
	float diem1, diem2, diem3;
};

void nhap(struct ThiSinh &a)
{
	getline(cin, a.name);
	cin >> a.date;
	cin >> a.diem1 >> a.diem2 >> a.diem3;
}

void in(struct ThiSinh a)
{
	cout << a.name << ' ' << a.date << ' ' << fixed << setprecision(1) << a.diem1 + a.diem2 + a.diem3;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
