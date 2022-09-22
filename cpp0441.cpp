#include<bits/stdc++.h>
using namespace std;
int a[1000000];

int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		int ans=-1;
		for(int i=0;i<n;i++) cin >> a[i];
		for(int i=0;i<n;i++) 
		{
			if(a[i]==k)
			{
				ans=i+1;
				break;
			}
		}
		cout << ans <<"\n";
	}
 	return 0;
}
