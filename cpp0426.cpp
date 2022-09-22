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
		cin.ignore();
		string s;
		getline(cin,s);
		stringstream ss(s);
		long long a[n+2]={};
		int idx=0;
		while(ss>>s)
		{
			long long x=stoll(s);
			a[idx]=x;
			idx++;
		}
		sort(a,a+n);
		for(int i=n-1;i>=n/2;i--) 
		{
			if(n%2==1&&i==n/2) cout << a[i] << " "; 
			else cout << a[i] << " " << a[n-i-1] <<" "; 
		}
		//if(n%2==1) cout << a[n/2+1];
		cout<<"\n";
	}
}