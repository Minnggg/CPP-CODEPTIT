#include<bits/stdc++.h>
using namespace std;

long long lcm(long long a,long long b)
{
	return a*b/__gcd(a,b);
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
		int x,y,z,n;
		cin >> x >> y >> z >> n;
		long long temp=lcm(lcm(x,y),z);
		if(temp>=pow(10,n)) cout << "-1";
		else 
		{
			long long k=pow(10,n-1) /temp;
			if(k*temp >=pow(10,n-1)&&k*temp<=pow(10,n)-1) cout << k*temp;
			else
			{
				k++;
				cout << k*temp;
			}
			
		}
		cout << "\n";
	}
 	return 0;
}
