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
		int idx=0;
		int a[n+2];
		stringstream ss(s);
		while(ss>>s)
		{
			int temp=stoi(s);
			a[idx]=temp;
			idx++;
		}
		int ans=-1;
		int i=0,j=n-1;
		while(i<=j)
		{
			if(a[i]<=a[j])
			{
				ans=max(ans,j-i);
			}
			if(a[i]>a[j]) i++;
			if(a[j]>a[i]) j--;
		}
		cout << ans <<"\n";
	}
 	return 0;
}
