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
	int a,b;
	cin >> a >> b;
	int mina=min(a,b),maxb=max(a,b);
	for(int i=mina;i<=maxb;i++) 
	{
		if(nt[i]==1) cout << i << " ";
	}
 	return 0;
}
