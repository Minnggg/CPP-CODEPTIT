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
		int a[4]={};
		for(int i=0;i<n;i++) 
		{
			int x;
			cin >> x;
			a[x]++;
		}
		for(int i=0;i<=2;i++)
		{
			int b=a[i];
			while(b--) cout << i << " ";
		}
		cout << "\n";
	}
 	return 0;
}
