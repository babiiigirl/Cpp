#include <bits/stdc++.h>
using namespace std;

int selectionsort(int a[], int n)
{
	int cnt = 0;
	int min;
	for (int i = 0; i < n - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[min])
				min = j;
		}
		if (min != i)
		{
			++cnt;
			swap(a[i], a[min]);
		}
	}
	return cnt;
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		cout << selectionsort(a, n) << endl;
	}
 } 
