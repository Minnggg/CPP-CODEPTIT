#include<bits/stdc++.h>
using namespace std;


int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int n;
	cin >> n;
	if(n==0) cout <<"1";
	else 
	{
		long long ans=0;
		long long kq=1;
		for(int i=1;i<=n;i++) 
		{
			kq*=i;
			ans=ans + kq;
			
		}
		cout << ans;
	}
 	return 0;
}