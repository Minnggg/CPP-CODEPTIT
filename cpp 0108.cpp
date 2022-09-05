#include<bits/stdc++.h>
using namespace std;

int check1(long long n)
{
	int temp=n%10;
	n/=10;
	while(n>0)
	{
		if(n%10>temp) return 0;
		else
		{
			temp=n%10;
			n/=10;	
		}	
	}	
	return 1;
}

int check2(long long n)
{
	int temp=n%10;
	n/=10;
	while(n>0)
	{
		if(n%10<temp) return 0;
		else
		{
			temp=n%10;
			n/=10;	
		}	
	}	
	return 1;
}

long long Pow(int n)
{
	int ans=1;
	while(n--)
	{
		ans*=10;
	}
	return ans;
}

int nt(long long n)
{
	if(n<2) return 0;
	else
	{
		long long sqr=sqrt(n);
		for(int i=2;i<=sqr;i++) if(n%i==0) return 0;
		return 1;
	}
	
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
		long long ans=0;
		int n;
		cin >> n ;
		for(long long i=Pow(n-1);i<=Pow(n)-1;i++) 
		{
			if(nt(i)&&(check1(i)||check2(i))) ans++;
		}
		cout << ans << "\n";
	}
 	return 0;
}
