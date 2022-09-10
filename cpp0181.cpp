#include<bits/stdc++.h>
using namespace std;


int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >>t;
	while(t--)
	{
		long long a,x,y;
		cin >> a >> x >> y;
		long long gcd=__gcd(x,y);
		for(long long i=0;i<gcd;i++) cout << a;
		cout << "\n";
	}
 	return 0;
}
