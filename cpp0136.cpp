#include<bits/stdc++.h>
using namespace std;

int checknt(long long n)
{
	if(n<2) return 0;
	else
	{
		long long sqr=sqrt(n);
		for(int i=2;i<=sqr;i++) if(n%i==0) return 0;
		return 1;
	}
	
}


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
		int ans=0;
		for(int i=2;i<=sqr;i++)
		{
			if(checknt(i)) ans++;
		}
		cout << ans << "\n";
	}
	
 	return 0;
}
