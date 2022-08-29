#include<bits/stdc++.h>
using namespace std;

int check_tang_giam(int n)
{
	int temp=n;
	int temp2=n%10;
	n/=10;
	while(temp>0)
	{
		int temp1=n%10;
		if(temp1>=temp2) return 0;
		temp2=temp1;
		n/=10;
	}
	return 1;
	
}


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
		cin >>n ;
		int ans=0;
		for(int i=pow(10,n-1);i<=pow(10,n)-1;i++)
		{
			if((i)==1&&)
		}
		
	}
 	return 0;
}
