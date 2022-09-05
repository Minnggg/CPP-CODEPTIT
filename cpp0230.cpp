#include<bits/stdc++.h>
using namespace std;


int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int n;
	cin >> n;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		int c=0,l=0;
		for(int j=0;j<3;j++) 
		{
			int x;
			cin >> x;
			if(x==0) c++;
			else l++;
		}
		if(l>c) cnt++;
	} 
	cout << cnt;
 	return 0;
}
