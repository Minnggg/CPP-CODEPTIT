#include<bits/stdc++.h>
using namespace std;
int n;
void slove()
{
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			cout << i << " " ;
			int temp=0;
			while(n%i==0) 
			{
				temp++;
				n/=i;
			}
			cout << temp << " ";
		}
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
		cin >> n;
		slove();
		cout << "\n";
	}
 	return 0;
}
