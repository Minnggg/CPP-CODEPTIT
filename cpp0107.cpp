#include<bits/stdc++.h>
using namespace std;
char a[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
char b[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};

int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >>t;
	while(t--)
	{
		int ma , cnt=15;
		cin >> ma;
		char key;
		if(ma==101) 
		{
			for(int i=0;i<15;i++) 
			{
				cin >> key;
				if(key!=a[i]) cnt--; 
			}
		}
		else
		{
			for(int i=0;i<15;i++) 
			{
				cin >> key;
				if(key!=b[i]) cnt--;
			}
		}
		double ans=(double)10*(double)cnt/(double)15;
		printf("%.2lf\n",ans);
		
	}
 	return 0;
}
