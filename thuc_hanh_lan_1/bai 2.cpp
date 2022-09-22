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
		long long n;
		cin >> n;
		long long sqr=sqrt(n);
		long long ans=0;
		for(long long  i=1;i<=n;i++)
		{
			if(n%i==0) ans=ans+i+n/i;
			if(i*i==n) ans-=i;
		}
		cout << ans <<"\n";
	}
 	return 0;
}
