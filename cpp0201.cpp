#include<bits/stdc++.h>
using namespace std;


int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int  t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		sort(a,a+n);
		int minn=a[1]-a[0];
		for(int i=0;i<n-1;i++)
		{
			minn=min(minn,a[i+1]-a[i]);
		}
		cout << minn << "\n";
	}
 	return 0;
}
