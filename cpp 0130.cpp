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
		for(int i=2;i<=sqr;i++)
		{
			while (n%i==0) 
			{
				cout << i << " ";
				n/=i;
			}
		}
		if(n!=1) cout << n;
		cout << "\n";
	}
 	return 0;
}
