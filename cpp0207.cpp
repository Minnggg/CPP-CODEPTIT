#include<bits/stdc++.h>
using namespace std;

int a[1000002];

int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		for(int i=1;i<=n;i++)
		{
			cin >> a[i];
		}
		for(int i=k+1;i<=n;i++) cout << a[i] << " ";
		for(int i=1;i<=k;i++) cout << a[i] << " ";
		cout << "\n";
	}
 	return 0;
}
