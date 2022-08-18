#include<bits/stdc++.h>
using namespace std;

struct toado
{
	double a,b;	
};

int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	toado a1,b1;
	int t;
	cin >> t;
	while(t--)
	{
		cin >>a1.a >> a1.b >> b1.a >> b1.b ;
		double ans;
		ans=sqrt((a1.a-b1.a)*(a1.a-b1.a)+(a1.b-b1.b)*(a1.b-b1.b));
		printf("%.4lf\n",ans);
	}
 	return 0;
}
