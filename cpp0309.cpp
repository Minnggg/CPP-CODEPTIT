#include<bits/stdc++.h>
using namespace std;


int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	cin.ignore(); 
	while(t--)
	{
		string s;
		getline(cin,s);
		stringstream ss(s);
		int ans=0;
		while(ss >> s)
		{
			ans++;
		}
		cout << ans << "\n";
	}
 	return 0;
}
