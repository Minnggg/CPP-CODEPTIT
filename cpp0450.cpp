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
		long long n,k;
		cin >> n >> k;
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
		int idx2=1e9;
		int check=-1;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j]) 
				{
					idx2=min(idx2,j);
					check=1;
				}
			}
		}
		if(check==-1) cout << check << "\n";
		else cout << a[idx2]<<"\n";
		
	}
}