#include<bits/stdc++.h>
using namespace std;

int sum_number(int n)
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
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int ans=sum_number(n);
		while(ans >9)
		{
			int temp=sum_number(ans);
			ans=temp;
		}
		cout << ans << "\n";
	}
 	return 0;
}
