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
		int n;
		cin >> n;
		cin.ignore();
		string s;
		getline(cin,s);
		stringstream ss(s);
		int temp=0;
		while(ss>>s)
		{
			long long x;
			x=stoll(s);
			if(x!=0) cout << x <<" ";
			else temp++;
		}
		while(temp--)
		{
			cout << 0 << " ";
		}
		cout << "\n";
	}
 	return 0;
}
