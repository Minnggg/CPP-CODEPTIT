#include<bits/stdc++.h>
using namespace std;

int checknt(long long n)
{
	if(n<2) return 0;
	else
	{
		long long sqr=sqrt(n);
		for(int i=2;i<=sqr;i++) if(n%i==0) return 0;
	}
	return 1;
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
		int n;
		cin >> n;
		int temp=0;
		for(int i=1;i<=n;i++)
		{
			if(__gcd(i,n)==1) temp++;
		}
		if(checknt(temp)==1) cout << 1;
		else cout << 0;
		cout << "\n";
	}
 	return 0;
}
