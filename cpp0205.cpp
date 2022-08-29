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
		int maxx=0;
		int n;
		cin >> n;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin >> x;
			maxx=max(x,maxx);
		}
		cout << maxx << "\n";
	}
 	return 0;
}
