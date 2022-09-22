#include<bits/stdc++.h>
using namespace std;


int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int n;
	cin >> n;
	int t[n+2];
	int d[n+2];
	for(int i=0;i<n;i++)
	{
		cin >> t[i] >> d[i] ;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(t[i]>t[j])
			{
				swap(t[i],t[j]);
				swap(d[i],d[j]);
			}
		}
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(ans>t[i]) ans+=d[i];
		else ans=t[i]+d[i];
	}
	cout << ans;
 	return 0;
}
