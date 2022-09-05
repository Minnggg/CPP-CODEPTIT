#include<bits/stdc++.h>
#include <algorithm>
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
		long a,b;
		cin >> a >> b;
		cout << (long long)a*b/__gcd(a,b) << " " << (long long)__gcd(a, b) << "\n";
	}
 	return 0;
}
