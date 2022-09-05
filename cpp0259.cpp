#include<bits/stdc++.h>
using namespace std;

// mxn nxp => mxp;




int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int m,n,p;
	cin >> m >> n >> p;
	int a[m+1][n+1],b[n+1][p+1],c[m+1][p+1];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++) cin >> a[i][j];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<p;j++) cin >> b[i][j];
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<p;j++)
		{
			c[i][j]=0;
			for(int l=0;l<n;l++) c[i][j]+=a[i][l]*b[l][j];
			cout << c[i][j] << " ";
		}
		cout << "\n";
	}
 	return 0;
}
