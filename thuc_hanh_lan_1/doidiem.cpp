#include<bits/stdc++.h>
using namespace std;

double diem(int n)
{
	if(n>=3&&n<=4) return 2.5;
	if(n>=5&&n<=6) return 3;
	if(n>=7&&n<=9) return 3.5;
	if(n>=10&&n<=12) return 4;
	if(n>=13&&n<=15) return 4.5;
	if(n>=16&&n<=19) return 5;
	if(n>=20&&n<=22) return 5.5;
	if(n>=23&&n<=26) return 6;
	if(n>=27&&n<=29) return 6.5;
	if(n>=30&&n<=32) return 7;
	if(n>=33&&n<=34) return 7.5;
	if(n>=35&&n<=36) return 8;
	if(n>=37&&n<=38) return 8.5;
	if(n>=39&&n<=40) return 9;
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
		int a,b;
		double d1,d2,d3,d4,tb;
		cin >> a >> b >> d3 >> d4;
		d1=diem(a);
		d2=diem(b);
		tb=(d1+d2+d3+d4)/4;
		int tb2=tb;
		if(tb-tb2 <0.25 ) cout << tb2<<".0";
		else if(tb-tb2<0.75) cout<<tb2<<".5";
		else cout<<tb2+1<<".0";
		cout <<"\n";
		 
	}
 	return 0;
}
