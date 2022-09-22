#include<bits/stdc++.h>
using namespace std;

int tongchuso(long long n)
{
	int ans=0;
	while(n>0)
	{
		ans+=n%10;
		n/=10;
	}
	return ans;
}




int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	t=1;
	while(t--)
	{
		long long n;
		cin >> n ;
		int temp=tongchuso(n);
		long long sqr=sqrt(n);
		int res=0;
		for(long long i=2;i<=sqr;i++)
		{
			while(n%i==0)
			{
				res+=tongchuso(i);
				n/=i;
			}
		}
		if(n!=1) res+=tongchuso(n);
		if(temp==res) cout << "YES\n";
		else cout << "NO\n";
	}
 	return 0;
}
