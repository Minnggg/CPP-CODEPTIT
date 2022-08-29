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
		int n,k;
		cin >> n>>k;
		vector<int> vt;
		vt.push_back(1);
		for(int i=2;i<=n;i++)
		{
			while(n%i==0)
			{
				vt.push_back(i);
				n/=i;
			}
		}
		if(n!=1) vt.push_back(n);
		if(k>=vt.size()) cout << "-1";
		else cout << vt[k];
		cout << "\n";
	}
 	return 0;
}