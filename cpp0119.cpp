#include<bits/stdc++.h>
using namespace std;


int check(int a)
{ 
	int q=0; 
	for(int i=1;i<=sqrt(a);i++)
	{ 
		if(a%i==0)
		{
			if(i%2==0) q++; 
			if((a/i)%2==0) q++; 
			if(i*i==a && a%2==0) q--;
		} 
	} 
	return q; 
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
		cout << check(n)<< "\n";
	}
 	return 0;
}
