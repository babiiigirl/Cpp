#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
	if (b == 0) return a;
	return gcd(b, a%b);
}

ll lcm(ll a, ll b)
{
	return a*b / gcd(a, b);
}

class PhanSo{
	private:
		ll tu, mau;
	public:
		PhanSo(ll tu, ll mau);
		friend istream& operator >> (istream&, PhanSo&);
		friend ostream& operator << (ostream&, PhanSo);
		friend PhanSo operator + (PhanSo, PhanSo);
};

PhanSo::PhanSo(ll tu, ll mau)
{
	this -> tu = tu;
	this -> mau = mau;
}

istream& operator >> (istream& in, PhanSo& a)
{
	in >> a.tu >> a.mau;
	return in;
}

ostream& operator << (ostream& out, PhanSo a)
{
	out << a.tu << "/" << a.mau << endl;
	return out;
}

PhanSo operator + (PhanSo a, PhanSo b)
{
	PhanSo tong(1, 1);
	ll mc = lcm(a.mau, b.mau);
	tong.tu = mc / a.mau * a.tu + mc / b.mau * b.tu;
	tong.mau = mc;
	ll g = gcd(tong.tu, tong.mau);
	tong.tu /= g;
	tong.mau /= g;
	return tong;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
} 
