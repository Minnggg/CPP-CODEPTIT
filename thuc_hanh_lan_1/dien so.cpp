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
		int n;
		cin >> n;
		int a[n+2];
		int l=1e9,r=-1e9;
		int f[1000000]={};
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			f[a[i]]++;
			l=min(l,a[i]);
			r=max(r,a[i]);
		} 
		int ans=0;
		for(int i=l;i<=r;i++) if(f[i]==0) ans++;
		cout << ans <<"\n";
		
	}
 	return 0;
}
