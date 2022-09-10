#include<bits/stdc++.h>
using namespace std;

long long mu(int a)
{
	long long kq=1;
	while(a--) kq*=10;
	return kq;
}

int check_tang(long long n)
{
	int temp=n%10;
	n/=10;
	while(n>0) 
	{
		int x=n%10;
		n/=10;
		if(x>=temp) return 0; 
		temp=x;
	}
	return 1;
}
int check_giam(long long n)
{
	int temp=n%10;
	n/=10;
	while(n>0)
	{
		int x=n%10;
		n/=10;
		if(x<=temp) return 0; 
		temp=x;
	}
	return 1;
}

int checknt(long long n)
{
	if(n<2) return 0;
	else
	{
		long long sqr=sqrt(n);
		for(long long i=2;i<=sqr;i++) 
		{
			if(n%i==0) return 0;
		} 
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
		int n;
		cin >> n;
		long long a=mu(n-1),b=mu(n)-1;
		int ans=0;
		for(long long i=a;i<=b;i++)
		{
			if((check_tang(i)==1||check_giam(i)==1)&&checknt(i)==1) ans++;
		}
		cout << ans << "\n";
	}
 	return 0;
}


