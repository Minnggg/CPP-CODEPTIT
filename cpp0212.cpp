#include<bits/stdc++.h>
using namespace std;

long long mod=1e9+7;

int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		long long n, x; 
		cin >> n >> x; 
		long long a[2000]; 
		for (int i = 0; i < n; ++i)
			{ 
				cin >> a[i]; 
			} 
		long long ans = 0; 
		for (int i = 0; i < n; ++i) 
		{ 
			long long s = 1; 
			for (int j = n - i - 1; j > 0; --j) 
			{ 
				s = (s * x) % mod; 
			}
			ans += a[i] * s; 
			ans=ans%mod;
		} 
		cout << ans << "\n"; 
	}
 	return 0;
}