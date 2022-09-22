#include<bits/stdc++.h>
using namespace std;

long long fibo[100];
void khoitao()
{
	fibo[0]=0;
	fibo[1]=1;
	for(int i=2;i<100;i++)
	{
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}

int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    khoitao();
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		for(int i=0;i<100;i++)
		{
			if(fibo[i]==n) 
			{
				cout << "YES\n";
				break;
			}
			if(fibo[i]>n)
			{
				cout << "NO\n";
				break;
			}
		}
	}
 	return 0;
}
