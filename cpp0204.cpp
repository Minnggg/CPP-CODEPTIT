#include<bits/stdc++.h>
using namespace std;

int a[100005]={};

void sang()
{
	for(int i=0;i<=100000;i++) a[i]=1;
	a[0]=a[1]=0;
	for(int i=2;i<=100000;i++)
	{
		if(a[i]==1) 
		{
			for(int j=2*i;j<=100000;j+=i) a[j]=0; 
		}
	}
}
int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	sang();
	int t;
	cin >> t;
	
	while(t--)
	{
		int l,r;
		cin >> l >> r;
		int ans=0;
		for(int i=l;i<=r;i++) if(a[i]) ans++;
		cout << ans << "\n";
	}
 	return 0;
}
