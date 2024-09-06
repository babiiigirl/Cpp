#include <bits/stdc++.h>
 
using namespace std;

int main()
{
	fstream in, out;
	in.open("PTIT.in", ios::in);
	out.open("PTIT.out", ios::out);
	string s;
	while (getline(in, s))
	{
		out << s;
	}
}
