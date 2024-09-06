#include <bits/stdc++.h>

using namespace std;

int check2(int n)
{
	int a = sqrt(n);
	if (a*a == n) return 1;
	else return 0; 
 } 
 
int check1(int n)
{	
	if (check2(n))
	{
		for (int i = 2; i < sqrt(n); i++)
		{
			if (n % i == 0) return 0; 
		} 
		return n>1; 
	} 
	else return 0;
 } 


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		for (int i = 4; i <= n; i++)
		{
			if (check1(i))
				cout << i << " "; 
		} 
		cout << endl; 
	} 
	return 0; 
 } 
