#include<bits/stdc++.h>
using namespace std;
int nt[1000000]={};

void sang()
{
	for(int i=0;i<1000000;i++) nt[i]=1;
	nt[0]=nt[1]=0;
	for(int i=2;i*i<1000000;i++)
	{
		if(nt[i]==1) 
		{
			for(int j=i*i;j<1000000;j+=i)  nt[j]=0;
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
		int check=0;
		for(int i=2;i<=n/2;i++) 
		{
			if(nt[i]==1 &&nt[n-i]==1 ) 
			{
				cout << i << " " <<n-i;
				check=1;
				break;
			}
		}
		if(check==0) cout << "-1";
		cout << "\n";
	}
 	return 0;
}
