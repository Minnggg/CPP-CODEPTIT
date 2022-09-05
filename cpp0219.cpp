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
		int a[m+1][n+1];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++) a[i][j]=0;
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++) 
			{
				int x ;
				cin >> x ;
				if(x==1) 
				{
					for(int k=0;k<m;k++) 
					{
						a[k][j]=1;
					}
					for(int k=0;k<n;k++) 
					{
						a[i][k]=1;
					}
				}
			}
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++) 
			{
				cout << a[i][j] << " ";
			}
			cout << "\n";
		}
	}
 	return 0;
}
