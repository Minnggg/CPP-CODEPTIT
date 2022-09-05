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
		int n ;
		cin >> n;
		int a[n+1][n+1];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++) cin >> a[i][j];
		}
		for(int j=0;j<n;j++) cout << a[0][j] << " ";
		cout << "\n";
		for(int i=1;i<n-1;i++)
		{
			for(int j=0;j<n;j++) 
			{
				if(j==0||j==n-1) cout << a[i][j] << " ";
				else cout << "  ";
			}
			cout << "\n";
		}
		for(int j=0;j<n;j++) cout << a[n-1][j] << " ";
		cout << "\n";
	}
 	return 0;
}
