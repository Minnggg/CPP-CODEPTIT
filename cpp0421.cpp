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
		int a[n+2];
		for(int i=0;i<n;i++) a[i]=-1;
		string s;
		getline(cin,s);
		stringstream ss(s);
		while(ss>>s)
		{
			int x = stoi(s);
			if(x>=0&&x<n) a[x]=x;
		}
		for(int i=0;i<n;i++) cout << a[i] << " ";
		cout << "\n";
	}
 	return 0;
}
