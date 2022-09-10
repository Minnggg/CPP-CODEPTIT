#include<bits/stdc++.h>
using namespace std;
int nt[10005]={};
void sang()
{
	for(int i=0;i<=10000;i++) nt[i]=1;
	nt[0]=nt[1]=0;
	for(int i=2;i<=10000;i++)
	{
		if(nt[i])
		{
			for(int j=2*i;j<=10000;j+=i) nt[j]=0;
		}
	}
}


int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	sang();
	while(t--)
	{
		int n;
		cin >> n;
		cout <<"1 ";
		for(int i=2;i<=n;i++)
		{
			if(nt[i]) cout << i <<" ";
			else
			{
				for(int j=2;j<=i;j++)
				{
					if(nt[j]==1&&i%j==0) 
					{
						cout << j << " ";
						break;
					}
				}
			}
		}
		cout << "\n";
	}
 	return 0;
}
