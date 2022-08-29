#include<bits/stdc++.h>
using namespace std;

int n;

void slove()
{
    int sqr=sqrt(n);
	for(int i=2;i<=sqr;i++)
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
			cout << temp << "\n";
		}
	}
}

int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	cin >> n;
	slove();
 	return 0;
}