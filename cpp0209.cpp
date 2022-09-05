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
		int n,q;
		cin >> n >> q;
		long long a[n+1];
		cin >> a[1];
		for(int i=2;i<=n;i++) 
		{
			int x;
			cin >> x;
			a[i]=a[i-1]+x;
		}
		while(q--)
		{
			int l,r;
			cin >> l >> r;
			if(l==1) cout << a[r] << "\n";
			else cout << a[r]-a[l-1] << "\n";
		}
	}
 	return 0;
}
