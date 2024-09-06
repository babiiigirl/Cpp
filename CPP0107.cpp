#include <bits/stdc++.h>

using namespace std;

int main()
{
	char a[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
	char b[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};
	int t;
	cin >> t;
	char c[15];
	while (t--)
	{
		int n;
		cin >> n;
		int cau = 0;
		for(int i = 0; i < 15; i++)
		{ 
            cin >> c[i]; 
            if(n == 101)
			{
                if(c[i] == a[i]) 
                cau++; 
            } 
            if(n == 102)
			{
                if(c[i] == b[i])
                cau++; 
            } 
        } 
		cout << fixed << setprecision(2) << (double)cau*10/15 << endl;
	}
	return 0;
 } 
