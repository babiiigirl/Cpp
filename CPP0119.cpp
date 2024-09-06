#include <bits/stdc++.h>

using namespace std;

int dem(int n) {
  int cnt = 0;
  for(int i = 1; i*i <= n; i++) {
    if(n % i == 0) 
	{
    	if (i % 2 == 0)
    	    ++cnt;
    	if ((n/i) % 2 == 0 && i != (n/i))
    	    ++cnt;
    }
  }
  return cnt;
}

int main() {
  int t;
  cin >> t;
  while(t--) 
  {
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "0" << endl;
    }
    else 
    {
        int kq = dem(n);
        cout << kq << endl;
    }
  }
  return 0;
}
