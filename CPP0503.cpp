#include <bits/stdc++.h>

using namespace std;

struct PhanSo{
	long long tu, mau;
}; 

void nhap (struct PhanSo &a){
	cin >> a.tu >> a.mau;
}

long long gcd(long long a, long long b)
{
	while (b!=0)
	{
		long long r = a%b;
		a = b;
		b = r;
	}
	return a;
 } 
 
void rutgon(struct PhanSo &a)
{
	long long x = gcd(a.tu, a.mau);
	a.tu /= x;
	a.mau /= x;
}

void in(struct PhanSo a)
{
	cout << a.tu << "/" << a.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
