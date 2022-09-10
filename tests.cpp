#include<bits/stdc++.h>
using namespace std;

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
int main()
{
 	int n ;
 	cin >> n;
 	cout << check_tang(n);
}
