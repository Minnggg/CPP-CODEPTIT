#include<bits/stdc++.h>
using namespace std;


int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int m,n;
		cin >> m >> n;
		long long a[m+2],b[n+2];
		for(int i=0;i<m;i++) cin >> a[i];
		for(int i=0;i<n;i++) cin >> b[i];
		sort(a,a+m);
		sort(b,b+n);
		cout << a[n-1]*b[0] << "\n";
	}
 	return 0;
}
