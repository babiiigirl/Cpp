#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
	if (b == 0)	
		return a;
	return (gcd(b, a%b));
}

ll lcm(ll a, ll b)
{
	return a*b/gcd(a, b);
}

struct PhanSo{
	ll tu, mau;
};

void process(PhanSo& a, PhanSo& b)
{
	PhanSo c;
	c.mau = a.mau * b.mau;
	c.tu = a.tu * b.mau + b.tu * a.mau;
	ll k = gcd(c.tu, c.mau);
	c.mau /= k;
	c.tu /= k;
	c.tu = c.tu * c.tu;
	c.mau = c.mau * c.mau;
	cout << c.tu << "/" << c.mau << " ";
	
	PhanSo d;
	d.tu = a.tu * b.tu * c.tu;
	d.mau = a.mau * b.mau * c.mau;
	ll h = gcd(d.tu, d.mau);
	d.tu /= h;
	d.mau /= h;
	cout << d.tu << "/" << d.mau << endl;
}


int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
