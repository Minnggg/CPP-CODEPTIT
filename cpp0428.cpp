#include<bits/stdc++.h>
using namespace std;


int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >>t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		long long a[n+k+2];
		for(int i=0;i<n+k;i++) cin >> a[i];
		sort(a,a+n+k);
		for(int i=0;i<n+k;i++) cout << a[i] <<" ";
		cout << "\n";
	}
 	return 0;
}