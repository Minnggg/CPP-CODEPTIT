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
		int a[1005]={};
		int minn=1e9,maxx=-1e9;
		while(n--)
		{
			int x;
			cin >> x;
			minn=min(minn,x);
			maxx=max(maxx,x);
			a[x]++;
		}
		int ans=0;
		for(int i=minn;i<=maxx;i++) if(a[i]==0) ans++;
		cout << ans << "\n";
	}
 	return 0;
}
