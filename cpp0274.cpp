#include<bits/stdc++.h>
using namespace std;

int a[1000006]={};


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
		memset(a,0,sizeof(a));
		cin >> n;
		while(n--)
		{
			int x;
			cin >> x;
			a[x]++;
		}
		int ans=0;
		for(int i=0;i<=1000000;i++)
		{
			if(a[i]!=1) ans+=a[i];
		}
		cout << ans << "\n";
	}
 	return 0;
}
