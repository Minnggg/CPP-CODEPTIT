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
		for(int i=0;i<n;i++) cin >> a[i];
		int check=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
				{
					cout << a[i]<<"\n";
					check=1;
					break;
				}
			}
			if(check==1) break;
		}
		if(check==0) cout <<"NO\n";
	}
}