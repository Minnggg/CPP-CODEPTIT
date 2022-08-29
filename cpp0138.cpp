#include<bits/stdc++.h>
using namespace std;
int a[10005]={};

void sang()
{
	a[0]=a[1]=0;
	for(int i=2;i<=10000;i++) a[i]=1;
	for(int i=2;i<=10000;i++)
	{
		if(a[i])
		{
			for(int j=2*i;j<=10000;j+=i) a[j]=0;
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
		int n;
		cin >> n;
		for(int i=2;i<=n;i++)
		{
			if(a[i]==1&&a[n-i]==1)
			{
				cout << i << " " << n-i;
				break;
			}
		}
		cout << endl;
	}
 	return 0;
}