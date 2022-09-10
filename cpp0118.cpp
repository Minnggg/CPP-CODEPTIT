#include<bits/stdc++.h>
using namespace std;

int check(int n)
{
	int temp=0;
	for(int i=2;i<=sqrt(n);i++)
	{
		int dem=0;
		while(n%i==0) 
		{
			dem++;
			n/=i;
		}
		if(dem>=2) return 0;
		if(dem==1) temp++;
	}
	if(n!=1) temp++;
	if(temp==3) return 1;
	else return 0;
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
		cout << check(n) << "\n";
	}
 	return 0;
}
