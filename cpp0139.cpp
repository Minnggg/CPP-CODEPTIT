#include<bits/stdc++.h> 
using namespace std;


long long sumNumber(long long n)
{ 
	long long temp=0; 
	while(n>0)
	{
		temp+=n%10; 
		n/=10; 
	}
 	return temp;
} 
long long primeNumber(long long n)
{ 
	long long i=2,sum=0; 
	while(i<=n)
	{
		if(n%i==0)
		{ 
			sum+=sumNumber(i); 
			n/=i; 
		}else i++; 
	} 
	return sum; 
} 
int isPrime(long long n)
{ 
	for(long long i=2;i*i<=n;i++)
	{ 
		if(n%i==0)return 0; 
	} 
	return 1; 
} 
int main()
{ 
	int t; 
	cin>>t; 
	while(t--)
	{
		long long n; 
		cin>>n; 
		if((sumNumber(n)==primeNumber(n))&&!isPrime(n))cout<<"YES\n"; 
		else cout<<"NO\n"; 
	}
	return 0; 
}