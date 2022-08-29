#include<bits/stdc++.h>
using namespace std;


int slove(int n)
{
	if(n<2) cout << "NO";
	else
	{
		int sqr=sqrt(n);
		for(int i=2;i<=sqr;i++)
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
	int n;
	cin >> n;
	if(slove(n)==1) cout << "YES";
	else cout << "NO";
 	return 0;
}
