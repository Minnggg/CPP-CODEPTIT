#include<bits/stdc++.h>
using namespace std;

int nt(int n)
{
	if(n<2) return 0;
	else
	{
		for(int i=2;i<=sqrt(n);i++) if(n%i==0) return 0;
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
		for(int i=2;i<=sqrt(n);++i) 
		{
			if(nt(i))	cout << i*i << " ";
		}
		cout << "\n";
	}
 	return 0;
}
