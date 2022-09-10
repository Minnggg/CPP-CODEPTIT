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
		int m,n,a,b;
		cin >> m >> n >> a >> b;
		int ans=0;
		for(int i=m;i<=n;i++)
		{
			if(i%a==0||i%b==0) ans++;
		}
		cout << ans << "\n";
	}
 	return 0;
}
