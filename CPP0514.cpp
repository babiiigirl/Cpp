#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
	string ma, ten, lop, ns;
	float gpa;
};

void chuanhoa(string& s)
{
	string res = "";
	stringstream ss(s);
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
	s = res;
}

void nhap(SinhVien *ds, int n)
{
	for (int i = 0; i < n; i++)
	{
	    scanf("\n");
		getline(cin, ds[i].ten);
		cin >> ds[i].lop >> ds[i].ns >> ds[i].gpa;
		ds[i].ma = "B20DCCN" + string(3 - to_string(i+1).length(), '0') + to_string(i+1);
	}
}

void in(SinhVien ds[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if(ds[i].ns[1] == '/')	ds[i].ns.insert(0, 1, '0');
		if(ds[i].ns[4] == '/')	ds[i].ns.insert(3, 1, '0');
		chuanhoa(ds[i].ten);
		cout << ds[i].ma << " ";
		cout << ds[i].ten << " ";
		cout << ds[i].lop << " ";
		cout << ds[i].ns << " ";
		cout << fixed << setprecision(2) << ds[i].gpa << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
