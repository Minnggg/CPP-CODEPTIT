#include<bits/stdc++.h>
using namespace std;


int main()
{
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	double n;
	cin >> n;
	double sum=0;
	for(double i=1;i<=n;i+=1)
	{
		sum+=(double)1/(double)i;
	}
	printf("%.4lf",sum);
 	return 0;
}
