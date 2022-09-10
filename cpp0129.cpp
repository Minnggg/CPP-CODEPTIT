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
		int n,p,x=0;
		cin >> n >> p;
		for(int i=1;i<=n;i++)
		{
			int k=i;
			while(k%p==0) 
			{
				x++;
				k/=p;
			}
		} 
		cout << x << "\n";
	}
 	return 0;
}
