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
		long long n ;
		cin >> n;
		long long ans=1;
		for(long long i=1;i<=n;i++)
		{
			long long temp=(long long)__gcd(i,ans);
			ans=i*ans/temp;
		}
		cout << ans << "\n";
	}
 	return 0;
}
