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
		if(n==6||n==28||n==496||n==8128||n==33550336||n==8589869056||n==137438691328) cout<<1<<"\n";
		else cout << "0\n";
	}
 	return 0;
}
