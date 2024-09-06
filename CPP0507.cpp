#include <bits/stdc++.h>

using namespace std;
using ll = long long;

struct PhanSo {
	ll tu, mau;
};

void nhap(struct PhanSo &a)
{
	cin >> a.tu >> a.mau;
}

ll gcd(ll a, ll b)
{
	while (b != 0)
	{
		ll r = a % b;
		a = b;
		b = r;
	}
	return a;
}

ll lcm(ll a, ll b)
{
	return a * b / gcd(a, b);
}

void rutgon(struct PhanSo &a)
{
	ll x = gcd(a.tu, a.mau);
	a.tu /= x;
	a.mau /= x;
}

struct PhanSo tong(struct PhanSo a, struct PhanSo b)
{
	struct PhanSo t;
	rutgon(a);
	rutgon(b);
	t.mau = lcm(a.mau, b.mau);
	t.tu = a.tu * (t.mau / a.mau) + b.tu * (t.mau / b.mau);
	rutgon(t);
	return t;
}

void in(PhanSo a)
{
	cout << a.tu << "/" << a.mau;
}

int main()
{
	struct PhanSo p, q;
	nhap(p);
	nhap(q);
	PhanSo t = tong(p, q);
	in(t);
	return 0;
}
