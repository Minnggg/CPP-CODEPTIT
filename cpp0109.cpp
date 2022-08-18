#include<bits/stdc++.h>
using namespace std;

int check(int n)
{
	int c=0,l=0;
	while(n>0)
	{
		if((n%10)%2==0) c++;
		else l++;
		n/=10;
	}
	if(c==l) return 1;
	else return 0;
}


int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int n;
	cin >> n;
	int a=pow(10,n-1);
	int b=pow(10,n)-1;
	int cnt=0;
	for(int i=a;i<=b;i++)
	{
		if(check(i)==1)
		{
			
			cout << i <<" ";
			cnt++;
			if(cnt==10)
			{
				cout << "\n";
				cnt=0;
			}
		} 
	}
 	return 0;
}
