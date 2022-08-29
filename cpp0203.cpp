#include<bits/stdc++.h>
using namespace std;

int a[1000001]={};

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
		memset(a,0,sizeof(a));
		for(int i=0;i<n;i++)
		{
			int x;
			cin >> x;
			if(x<0) continue;
			a[x]++;
		}
		for(int i=1;i<=1e6;i++)
		{
			if(a[i]==0)
			{
				cout << i << "\n";
				break;
			}
		}
	}
 	return 0;
}
